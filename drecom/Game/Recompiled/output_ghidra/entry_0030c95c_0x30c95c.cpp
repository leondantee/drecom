#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_0030c95c
// Address: 0x30c95c - 0x30c9ec
void entry_0030c95c_0x30c95c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0030c95c_0x30c95c");
#endif

    switch (ctx->pc) {
        case 0x30c9b4u: goto label_30c9b4;
        default: break;
    }

    ctx->pc = 0x30c95cu;

    // 0x30c95c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x30c95cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30c960: 0xc4611288  lwc1        $f1, 0x1288($v1)
    ctx->pc = 0x30c960u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x30c964: 0x3c0344bb  lui         $v1, 0x44BB
    ctx->pc = 0x30c964u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17595 << 16));
    // 0x30c968: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x30c968u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x30c96c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x30c96cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x30c970: 0x0  nop
    ctx->pc = 0x30c970u;
    // NOP
    // 0x30c974: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x30c974u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x30c978: 0x0  nop
    ctx->pc = 0x30c978u;
    // NOP
    // 0x30c97c: 0x4501001b  bc1t        . + 4 + (0x1B << 2)
    ctx->pc = 0x30C97Cu;
    {
        const bool branch_taken_0x30c97c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x30c97c) {
            ctx->pc = 0x30C9ECu;
            return;
        }
    }
    ctx->pc = 0x30C984u;
    // 0x30c984: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x30c984u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30c988: 0x8c440130  lw          $a0, 0x130($v0)
    ctx->pc = 0x30c988u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x30c98c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x30c98cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30c990: 0x3c023f49  lui         $v0, 0x3F49
    ctx->pc = 0x30c990u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16201 << 16));
    // 0x30c994: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x30c994u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x30c998: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x30c998u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x30c99c: 0x24840030  addiu       $a0, $a0, 0x30
    ctx->pc = 0x30c99cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
    // 0x30c9a0: 0xc46c00d4  lwc1        $f12, 0xD4($v1)
    ctx->pc = 0x30c9a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x30c9a4: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x30c9a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x30c9a8: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x30c9a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x30c9ac: 0xc05caf8  jal         func_172BE0
    ctx->pc = 0x30C9ACu;
    SET_GPR_U32(ctx, 31, 0x30C9B4u);
    ctx->pc = 0x172BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172BE0u, 0x30C9ACu, 0x30C9B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30C9B4u;
label_30c9b4:
    // 0x30c9b4: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x30C9B4u;
    {
        const bool branch_taken_0x30c9b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x30c9b4) {
            ctx->pc = 0x30C9ECu;
            return;
        }
    }
    ctx->pc = 0x30C9BCu;
    // 0x30c9bc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x30c9bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30c9c0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x30c9c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30c9c4: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x30c9c4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x30c9c8: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x30c9c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x30c9cc: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x30c9ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30c9d0: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x30c9d0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x30c9d4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x30c9d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30c9d8: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x30c9d8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x30c9dc: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x30c9dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30c9e0: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x30c9e0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x30c9e4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x30c9e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30c9e8: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x30c9e8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    ctx->pc = 0x30c9ecu;
}

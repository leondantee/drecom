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

// Function: entry_001cae94
// Address: 0x1cae94 - 0x1caf54
void entry_001cae94_0x1cae94(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cae94_0x1cae94");
#endif

    switch (ctx->pc) {
        case 0x1caed4u: goto label_1caed4;
        case 0x1caf30u: goto label_1caf30;
        default: break;
    }

    ctx->pc = 0x1cae94u;

    // 0x1cae94: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1cae94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1cae98: 0x8c231a98  lw          $v1, 0x1A98($at)
    ctx->pc = 0x1cae98u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x1cae9c: 0x34632000  ori         $v1, $v1, 0x2000
    ctx->pc = 0x1cae9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8192);
    // 0x1caea0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1caea0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1caea4: 0xac231a98  sw          $v1, 0x1A98($at)
    ctx->pc = 0x1caea4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5D1A98u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A98u, _value); } while (0);
    // 0x1caea8: 0x24040080  addiu       $a0, $zero, 0x80
    ctx->pc = 0x1caea8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1caeac: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1caeacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1caeb0: 0xa06410a8  sb          $a0, 0x10A8($v1)
    ctx->pc = 0x1caeb0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4264), (uint8_t)GPR_U32(ctx, 4));
    // 0x1caeb4: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x1caeb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1caeb8: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1caeb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1caebc: 0x8c650368  lw          $a1, 0x368($v1)
    ctx->pc = 0x1caebcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 872)));
    // 0x1caec0: 0x24060066  addiu       $a2, $zero, 0x66
    ctx->pc = 0x1caec0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 102));
    // 0x1caec4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1caec4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1caec8: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1caec8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1caecc: 0xc0965d0  jal         func_259740
    ctx->pc = 0x1CAECCu;
    SET_GPR_U32(ctx, 31, 0x1CAED4u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x1CAECCu, 0x1CAED4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CAED4u;
label_1caed4:
    // 0x1caed4: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1caed4u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1caed8: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1caed8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1caedc: 0xa2040000  sb          $a0, 0x0($s0)
    ctx->pc = 0x1caedcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x1caee0: 0xa2000001  sb          $zero, 0x1($s0)
    ctx->pc = 0x1caee0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x1caee4: 0xa2000002  sb          $zero, 0x2($s0)
    ctx->pc = 0x1caee4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x1caee8: 0xa2000003  sb          $zero, 0x3($s0)
    ctx->pc = 0x1caee8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1caeec: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x1caeecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x1caef0: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1caef0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1caef4: 0xac6013e8  sw          $zero, 0x13E8($v1)
    ctx->pc = 0x1caef4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 5096), GPR_U32(ctx, 0));
    // 0x1caef8: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1caef8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1caefc: 0xc4611388  lwc1        $f1, 0x1388($v1)
    ctx->pc = 0x1caefcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 5000)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1caf00: 0x3c044240  lui         $a0, 0x4240
    ctx->pc = 0x1caf00u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16960 << 16));
    // 0x1caf04: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1caf04u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1caf08: 0x0  nop
    ctx->pc = 0x1caf08u;
    // NOP
    // 0x1caf0c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1caf0cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1caf10: 0x0  nop
    ctx->pc = 0x1caf10u;
    // NOP
    // 0x1caf14: 0x4501000f  bc1t        . + 4 + (0xF << 2)
    ctx->pc = 0x1CAF14u;
    {
        const bool branch_taken_0x1caf14 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1caf14) {
            ctx->pc = 0x1CAF54u;
            return;
        }
    }
    ctx->pc = 0x1CAF1Cu;
    // 0x1caf1c: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1caf1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1caf20: 0xc46c1380  lwc1        $f12, 0x1380($v1)
    ctx->pc = 0x1caf20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1caf24: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x1caf24u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1caf28: 0xc056f24  jal         func_15BC90
    ctx->pc = 0x1CAF28u;
    SET_GPR_U32(ctx, 31, 0x1CAF30u);
    ctx->pc = 0x15BC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15BC90u, 0x1CAF28u, 0x1CAF30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CAF30u;
label_1caf30:
    // 0x1caf30: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x1caf30u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1caf34: 0x10800013  beqz        $a0, . + 4 + (0x13 << 2)
    ctx->pc = 0x1CAF34u;
    {
        const bool branch_taken_0x1caf34 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1caf34) {
            ctx->pc = 0x1CAF84u;
            return;
        }
    }
    ctx->pc = 0x1CAF3Cu;
    // 0x1caf3c: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1caf3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1caf40: 0x8c6413ec  lw          $a0, 0x13EC($v1)
    ctx->pc = 0x1caf40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 5100)));
    // 0x1caf44: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1caf44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1caf48: 0xac6413e8  sw          $a0, 0x13E8($v1)
    ctx->pc = 0x1caf48u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 5096), GPR_U32(ctx, 4));
    // 0x1caf4c: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x1CAF4Cu;
    {
        const bool branch_taken_0x1caf4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1caf4c) {
            ctx->pc = 0x1CAF84u;
            return;
        }
    }
    ctx->pc = 0x1CAF54u;
}

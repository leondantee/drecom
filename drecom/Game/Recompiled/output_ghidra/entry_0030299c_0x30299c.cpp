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

// Function: entry_0030299c
// Address: 0x30299c - 0x302a60
void entry_0030299c_0x30299c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0030299c_0x30299c");
#endif

    switch (ctx->pc) {
        case 0x302a28u: goto label_302a28;
        default: break;
    }

    ctx->pc = 0x30299cu;

    // 0x30299c: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x30299cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x3029a0: 0x9023ec68  lbu         $v1, -0x1398($at)
    ctx->pc = 0x3029a0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x3EEC68u));
    // 0x3029a4: 0x1060002e  beqz        $v1, . + 4 + (0x2E << 2)
    ctx->pc = 0x3029A4u;
    {
        const bool branch_taken_0x3029a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3029a4) {
            ctx->pc = 0x302A60u;
            return;
        }
    }
    ctx->pc = 0x3029ACu;
    // 0x3029ac: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x3029acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3029b0: 0xc4611288  lwc1        $f1, 0x1288($v1)
    ctx->pc = 0x3029b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3029b4: 0x3c034509  lui         $v1, 0x4509
    ctx->pc = 0x3029b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17673 << 16));
    // 0x3029b8: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x3029b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x3029bc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3029bcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3029c0: 0x0  nop
    ctx->pc = 0x3029c0u;
    // NOP
    // 0x3029c4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x3029c4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3029c8: 0x0  nop
    ctx->pc = 0x3029c8u;
    // NOP
    // 0x3029cc: 0x45010024  bc1t        . + 4 + (0x24 << 2)
    ctx->pc = 0x3029CCu;
    {
        const bool branch_taken_0x3029cc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3029cc) {
            ctx->pc = 0x302A60u;
            return;
        }
    }
    ctx->pc = 0x3029D4u;
    // 0x3029d4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x3029d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3029d8: 0xc4611288  lwc1        $f1, 0x1288($v1)
    ctx->pc = 0x3029d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3029dc: 0x3c03452f  lui         $v1, 0x452F
    ctx->pc = 0x3029dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17711 << 16));
    // 0x3029e0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3029e0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3029e4: 0x0  nop
    ctx->pc = 0x3029e4u;
    // NOP
    // 0x3029e8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x3029e8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3029ec: 0x0  nop
    ctx->pc = 0x3029ecu;
    // NOP
    // 0x3029f0: 0x4500001b  bc1f        . + 4 + (0x1B << 2)
    ctx->pc = 0x3029F0u;
    {
        const bool branch_taken_0x3029f0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3029f0) {
            ctx->pc = 0x302A60u;
            return;
        }
    }
    ctx->pc = 0x3029F8u;
    // 0x3029f8: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x3029f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3029fc: 0x8c440130  lw          $a0, 0x130($v0)
    ctx->pc = 0x3029fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x302a00: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x302a00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x302a04: 0x3c023e49  lui         $v0, 0x3E49
    ctx->pc = 0x302a04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15945 << 16));
    // 0x302a08: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x302a08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x302a0c: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x302a0cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x302a10: 0x24840030  addiu       $a0, $a0, 0x30
    ctx->pc = 0x302a10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
    // 0x302a14: 0xc46c00d4  lwc1        $f12, 0xD4($v1)
    ctx->pc = 0x302a14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x302a18: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x302a18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x302a1c: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x302a1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x302a20: 0xc05caf8  jal         func_172BE0
    ctx->pc = 0x302A20u;
    SET_GPR_U32(ctx, 31, 0x302A28u);
    ctx->pc = 0x172BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172BE0u, 0x302A20u, 0x302A28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x302A28u;
label_302a28:
    // 0x302a28: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x302A28u;
    {
        const bool branch_taken_0x302a28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x302a28) {
            ctx->pc = 0x302A60u;
            return;
        }
    }
    ctx->pc = 0x302A30u;
    // 0x302a30: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x302a30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x302a34: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x302a34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x302a38: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x302a38u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x302a3c: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x302a3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x302a40: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x302a40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x302a44: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x302a44u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x302a48: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x302a48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x302a4c: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x302a4cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x302a50: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x302a50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x302a54: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x302a54u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x302a58: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x302a58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x302a5c: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x302a5cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    ctx->pc = 0x302a60u;
}

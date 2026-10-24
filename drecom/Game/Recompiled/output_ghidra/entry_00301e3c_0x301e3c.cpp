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

// Function: entry_00301e3c
// Address: 0x301e3c - 0x301f00
void entry_00301e3c_0x301e3c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00301e3c_0x301e3c");
#endif

    switch (ctx->pc) {
        case 0x301ec8u: goto label_301ec8;
        default: break;
    }

    ctx->pc = 0x301e3cu;

    // 0x301e3c: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x301e3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x301e40: 0x9023ec68  lbu         $v1, -0x1398($at)
    ctx->pc = 0x301e40u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x3EEC68u));
    // 0x301e44: 0x1060005b  beqz        $v1, . + 4 + (0x5B << 2)
    ctx->pc = 0x301E44u;
    {
        const bool branch_taken_0x301e44 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x301e44) {
            ctx->pc = 0x301FB4u;
            return;
        }
    }
    ctx->pc = 0x301E4Cu;
    // 0x301e4c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x301e4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x301e50: 0xc4611288  lwc1        $f1, 0x1288($v1)
    ctx->pc = 0x301e50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x301e54: 0x3c0344ed  lui         $v1, 0x44ED
    ctx->pc = 0x301e54u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17645 << 16));
    // 0x301e58: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x301e58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x301e5c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x301e5cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x301e60: 0x0  nop
    ctx->pc = 0x301e60u;
    // NOP
    // 0x301e64: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x301e64u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x301e68: 0x0  nop
    ctx->pc = 0x301e68u;
    // NOP
    // 0x301e6c: 0x45010024  bc1t        . + 4 + (0x24 << 2)
    ctx->pc = 0x301E6Cu;
    {
        const bool branch_taken_0x301e6c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x301e6c) {
            ctx->pc = 0x301F00u;
            return;
        }
    }
    ctx->pc = 0x301E74u;
    // 0x301e74: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x301e74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x301e78: 0xc4611288  lwc1        $f1, 0x1288($v1)
    ctx->pc = 0x301e78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x301e7c: 0x3c0344fa  lui         $v1, 0x44FA
    ctx->pc = 0x301e7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17658 << 16));
    // 0x301e80: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x301e80u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x301e84: 0x0  nop
    ctx->pc = 0x301e84u;
    // NOP
    // 0x301e88: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x301e88u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x301e8c: 0x0  nop
    ctx->pc = 0x301e8cu;
    // NOP
    // 0x301e90: 0x4500001b  bc1f        . + 4 + (0x1B << 2)
    ctx->pc = 0x301E90u;
    {
        const bool branch_taken_0x301e90 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x301e90) {
            ctx->pc = 0x301F00u;
            return;
        }
    }
    ctx->pc = 0x301E98u;
    // 0x301e98: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x301e98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x301e9c: 0x8c440130  lw          $a0, 0x130($v0)
    ctx->pc = 0x301e9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x301ea0: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x301ea0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x301ea4: 0x3c023dc9  lui         $v0, 0x3DC9
    ctx->pc = 0x301ea4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15817 << 16));
    // 0x301ea8: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x301ea8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x301eac: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x301eacu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x301eb0: 0x24840030  addiu       $a0, $a0, 0x30
    ctx->pc = 0x301eb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
    // 0x301eb4: 0xc46c00d4  lwc1        $f12, 0xD4($v1)
    ctx->pc = 0x301eb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x301eb8: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x301eb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x301ebc: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x301ebcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x301ec0: 0xc05caf8  jal         func_172BE0
    ctx->pc = 0x301EC0u;
    SET_GPR_U32(ctx, 31, 0x301EC8u);
    ctx->pc = 0x172BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172BE0u, 0x301EC0u, 0x301EC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x301EC8u;
label_301ec8:
    // 0x301ec8: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x301EC8u;
    {
        const bool branch_taken_0x301ec8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x301ec8) {
            ctx->pc = 0x301F00u;
            return;
        }
    }
    ctx->pc = 0x301ED0u;
    // 0x301ed0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x301ed0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x301ed4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x301ed4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x301ed8: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x301ed8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x301edc: 0x24040015  addiu       $a0, $zero, 0x15
    ctx->pc = 0x301edcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x301ee0: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x301ee0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x301ee4: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x301ee4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x301ee8: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x301ee8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x301eec: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x301eecu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x301ef0: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x301ef0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x301ef4: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x301ef4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x301ef8: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x301ef8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x301efc: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x301efcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    ctx->pc = 0x301f00u;
}

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

// Function: e2d_id58_type00
// Address: 0x2b72d0 - 0x2b7398
void e2d_id58_type00_0x2b72d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("e2d_id58_type00_0x2b72d0");
#endif

    switch (ctx->pc) {
        case 0x2b736cu: goto label_2b736c;
        default: break;
    }

    ctx->pc = 0x2b72d0u;

    // 0x2b72d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2b72d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2b72d4: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x2b72d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x2b72d8: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x2b72d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x2b72dc: 0x3c023f66  lui         $v0, 0x3F66
    ctx->pc = 0x2b72dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16230 << 16));
    // 0x2b72e0: 0x34426666  ori         $v0, $v0, 0x6666
    ctx->pc = 0x2b72e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26214);
    // 0x2b72e4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b72e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b72e8: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2b72e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b72ec: 0xe44000ac  swc1        $f0, 0xAC($v0)
    ctx->pc = 0x2b72ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 172), bits); }
    // 0x2b72f0: 0x3c02438c  lui         $v0, 0x438C
    ctx->pc = 0x2b72f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17292 << 16));
    // 0x2b72f4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b72f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b72f8: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2b72f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b72fc: 0xe4400104  swc1        $f0, 0x104($v0)
    ctx->pc = 0x2b72fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 260), bits); }
    // 0x2b7300: 0x24030028  addiu       $v1, $zero, 0x28
    ctx->pc = 0x2b7300u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x2b7304: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2b7304u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b7308: 0xac430100  sw          $v1, 0x100($v0)
    ctx->pc = 0x2b7308u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 256), GPR_U32(ctx, 3));
    // 0x2b730c: 0x3c023e4c  lui         $v0, 0x3E4C
    ctx->pc = 0x2b730cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15948 << 16));
    // 0x2b7310: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x2b7310u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x2b7314: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b7314u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b7318: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2b7318u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b731c: 0xe44000f4  swc1        $f0, 0xF4($v0)
    ctx->pc = 0x2b731cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 244), bits); }
    // 0x2b7320: 0x3c023f66  lui         $v0, 0x3F66
    ctx->pc = 0x2b7320u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16230 << 16));
    // 0x2b7324: 0x34426666  ori         $v0, $v0, 0x6666
    ctx->pc = 0x2b7324u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26214);
    // 0x2b7328: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b7328u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b732c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2b732cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b7330: 0xe44000fc  swc1        $f0, 0xFC($v0)
    ctx->pc = 0x2b7330u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 252), bits); }
    // 0x2b7334: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2b7334u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b7338: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2b7338u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b733c: 0xa043013b  sb          $v1, 0x13B($v0)
    ctx->pc = 0x2b733cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 315), (uint8_t)GPR_U32(ctx, 3));
    // 0x2b7340: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2b7340u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2b7344: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2b7344u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b7348: 0xa043011d  sb          $v1, 0x11D($v0)
    ctx->pc = 0x2b7348u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 285), (uint8_t)GPR_U32(ctx, 3));
    // 0x2b734c: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x2b734cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2b7350: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2b7350u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b7354: 0xa043013a  sb          $v1, 0x13A($v0)
    ctx->pc = 0x2b7354u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 314), (uint8_t)GPR_U32(ctx, 3));
    // 0x2b7358: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2b7358u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b735c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2b735cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b7360: 0xa043011e  sb          $v1, 0x11E($v0)
    ctx->pc = 0x2b7360u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 286), (uint8_t)GPR_U32(ctx, 3));
    // 0x2b7364: 0xc067648  jal         func_19D920
    ctx->pc = 0x2B7364u;
    SET_GPR_U32(ctx, 31, 0x2B736Cu);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2B7364u, 0x2B736Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B736Cu;
label_2b736c:
    // 0x2b736c: 0x3c033d75  lui         $v1, 0x3D75
    ctx->pc = 0x2b736cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15733 << 16));
    // 0x2b7370: 0x3463c28f  ori         $v1, $v1, 0xC28F
    ctx->pc = 0x2b7370u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)49807);
    // 0x2b7374: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2b7374u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2b7378: 0x0  nop
    ctx->pc = 0x2b7378u;
    // NOP
    // 0x2b737c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2b737cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2b7380: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2b7380u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b7384: 0xe4600038  swc1        $f0, 0x38($v1)
    ctx->pc = 0x2b7384u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 56), bits); }
    // 0x2b7388: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x2b7388u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b738c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2b738cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2b7390: 0x3e00008  jr          $ra
    ctx->pc = 0x2B7390u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B7390u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B7398u;
}

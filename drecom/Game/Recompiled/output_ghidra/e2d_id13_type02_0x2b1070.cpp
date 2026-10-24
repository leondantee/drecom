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

// Function: e2d_id13_type02
// Address: 0x2b1070 - 0x2b115c
void e2d_id13_type02_0x2b1070(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("e2d_id13_type02_0x2b1070");
#endif

    switch (ctx->pc) {
        case 0x2b1100u: goto label_2b1100;
        default: break;
    }

    ctx->pc = 0x2b1070u;

    // 0x2b1070: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2b1070u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2b1074: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x2b1074u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x2b1078: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x2b1078u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x2b107c: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x2b107cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x2b1080: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b1080u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b1084: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2b1084u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b1088: 0xe4400090  swc1        $f0, 0x90($v0)
    ctx->pc = 0x2b1088u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 144), bits); }
    // 0x2b108c: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x2b108cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x2b1090: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b1090u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b1094: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2b1094u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b1098: 0xe4400094  swc1        $f0, 0x94($v0)
    ctx->pc = 0x2b1098u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 148), bits); }
    // 0x2b109c: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x2b109cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x2b10a0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b10a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b10a4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2b10a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b10a8: 0xe4400098  swc1        $f0, 0x98($v0)
    ctx->pc = 0x2b10a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 152), bits); }
    // 0x2b10ac: 0x3c02437f  lui         $v0, 0x437F
    ctx->pc = 0x2b10acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17279 << 16));
    // 0x2b10b0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b10b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b10b4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2b10b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b10b8: 0xe440009c  swc1        $f0, 0x9C($v0)
    ctx->pc = 0x2b10b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 156), bits); }
    // 0x2b10bc: 0x3c023f78  lui         $v0, 0x3F78
    ctx->pc = 0x2b10bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16248 << 16));
    // 0x2b10c0: 0x344251ec  ori         $v0, $v0, 0x51EC
    ctx->pc = 0x2b10c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)20972);
    // 0x2b10c4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b10c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b10c8: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2b10c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b10cc: 0xe44000ac  swc1        $f0, 0xAC($v0)
    ctx->pc = 0x2b10ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 172), bits); }
    // 0x2b10d0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2b10d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b10d4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2b10d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b10d8: 0xa043013b  sb          $v1, 0x13B($v0)
    ctx->pc = 0x2b10d8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 315), (uint8_t)GPR_U32(ctx, 3));
    // 0x2b10dc: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2b10dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b10e0: 0xa0400138  sb          $zero, 0x138($v0)
    ctx->pc = 0x2b10e0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 312), (uint8_t)GPR_U32(ctx, 0));
    // 0x2b10e4: 0x3c023e4c  lui         $v0, 0x3E4C
    ctx->pc = 0x2b10e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15948 << 16));
    // 0x2b10e8: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x2b10e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x2b10ec: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b10ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b10f0: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2b10f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b10f4: 0xe4400038  swc1        $f0, 0x38($v0)
    ctx->pc = 0x2b10f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 56), bits); }
    // 0x2b10f8: 0xc06766c  jal         func_19D9B0
    ctx->pc = 0x2B10F8u;
    SET_GPR_U32(ctx, 31, 0x2B1100u);
    ctx->pc = 0x19D9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D9B0u, 0x2B10F8u, 0x2B1100u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B1100u;
label_2b1100:
    // 0x2b1100: 0x3c034348  lui         $v1, 0x4348
    ctx->pc = 0x2b1100u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17224 << 16));
    // 0x2b1104: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2b1104u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2b1108: 0x0  nop
    ctx->pc = 0x2b1108u;
    // NOP
    // 0x2b110c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2b110cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2b1110: 0x3c034348  lui         $v1, 0x4348
    ctx->pc = 0x2b1110u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17224 << 16));
    // 0x2b1114: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b1114u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b1118: 0x0  nop
    ctx->pc = 0x2b1118u;
    // NOP
    // 0x2b111c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2b111cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2b1120: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2b1120u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b1124: 0xe4600104  swc1        $f0, 0x104($v1)
    ctx->pc = 0x2b1124u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 260), bits); }
    // 0x2b1128: 0x24040028  addiu       $a0, $zero, 0x28
    ctx->pc = 0x2b1128u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x2b112c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2b112cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b1130: 0xac640100  sw          $a0, 0x100($v1)
    ctx->pc = 0x2b1130u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 256), GPR_U32(ctx, 4));
    // 0x2b1134: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2b1134u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b1138: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2b1138u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b113c: 0xa064013a  sb          $a0, 0x13A($v1)
    ctx->pc = 0x2b113cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 314), (uint8_t)GPR_U32(ctx, 4));
    // 0x2b1140: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x2b1140u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2b1144: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2b1144u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b1148: 0xa064011d  sb          $a0, 0x11D($v1)
    ctx->pc = 0x2b1148u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 285), (uint8_t)GPR_U32(ctx, 4));
    // 0x2b114c: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x2b114cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b1150: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2b1150u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2b1154: 0x3e00008  jr          $ra
    ctx->pc = 0x2B1154u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B1154u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B115Cu;
}

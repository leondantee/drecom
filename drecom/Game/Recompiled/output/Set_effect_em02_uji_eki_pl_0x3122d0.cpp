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

// Function: Set_effect_em02_uji_eki_pl
// Address: 0x3122d0 - 0x31241c
void Set_effect_em02_uji_eki_pl_0x3122d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Set_effect_em02_uji_eki_pl_0x3122d0");
#endif

    switch (ctx->pc) {
        case 0x312344u: goto label_312344;
        case 0x312390u: goto label_312390;
        case 0x3123fcu: goto label_3123fc;
        default: break;
    }

    ctx->pc = 0x3122d0u;

    // 0x3122d0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3122d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x3122d4: 0x7fbf0020  sq          $ra, 0x20($sp)
    ctx->pc = 0x3122d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 31));
    // 0x3122d8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3122d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3122dc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3122dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3122e0: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x3122e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x3122e4: 0xafa50038  sw          $a1, 0x38($sp)
    ctx->pc = 0x3122e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 5));
    // 0x3122e8: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x3122e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x3122ec: 0x2442dbc0  addiu       $v0, $v0, -0x2440
    ctx->pc = 0x3122ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958016));
    // 0x3122f0: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x3122f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x3122f4: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x3122f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x3122f8: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x3122f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x3122fc: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x3122fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x312300: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x312300u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x312304: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x312304u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x312308: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x312308u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x31230c: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x31230cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x312310: 0x8c22dcf0  lw          $v0, -0x2310($at)
    ctx->pc = 0x312310u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3EDCF0u));
    // 0x312314: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x312314u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x312318: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x312318u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x31231c: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x31231cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x312320: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x312320u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x312324: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x312324u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x312328: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x312328u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x31232c: 0x823825  or          $a3, $a0, $v0
    ctx->pc = 0x31232cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x312330: 0x24043503  addiu       $a0, $zero, 0x3503
    ctx->pc = 0x312330u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 13571));
    // 0x312334: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x312334u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x312338: 0x8fa60030  lw          $a2, 0x30($sp)
    ctx->pc = 0x312338u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x31233c: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x31233Cu;
    SET_GPR_U32(ctx, 31, 0x312344u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x31233Cu, 0x312344u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x312344u;
label_312344:
    // 0x312344: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x312344u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x312348: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x312348u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x31234c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x31234cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x312350: 0x0  nop
    ctx->pc = 0x312350u;
    // NOP
    // 0x312354: 0xe6000090  swc1        $f0, 0x90($s0)
    ctx->pc = 0x312354u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 144), bits); }
    // 0x312358: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x312358u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x31235c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x31235cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x312360: 0x0  nop
    ctx->pc = 0x312360u;
    // NOP
    // 0x312364: 0xe6000094  swc1        $f0, 0x94($s0)
    ctx->pc = 0x312364u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 148), bits); }
    // 0x312368: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x312368u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x31236c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x31236cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x312370: 0x0  nop
    ctx->pc = 0x312370u;
    // NOP
    // 0x312374: 0xe6000098  swc1        $f0, 0x98($s0)
    ctx->pc = 0x312374u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 152), bits); }
    // 0x312378: 0x3c024258  lui         $v0, 0x4258
    ctx->pc = 0x312378u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16984 << 16));
    // 0x31237c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x31237cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x312380: 0x0  nop
    ctx->pc = 0x312380u;
    // NOP
    // 0x312384: 0xe600009c  swc1        $f0, 0x9C($s0)
    ctx->pc = 0x312384u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 156), bits); }
    // 0x312388: 0xc067648  jal         func_19D920
    ctx->pc = 0x312388u;
    SET_GPR_U32(ctx, 31, 0x312390u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x312388u, 0x312390u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x312390u;
label_312390:
    // 0x312390: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x312390u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x312394: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x312394u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x312398: 0x0  nop
    ctx->pc = 0x312398u;
    // NOP
    // 0x31239c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x31239cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x3123a0: 0x3c0242dc  lui         $v0, 0x42DC
    ctx->pc = 0x3123a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17116 << 16));
    // 0x3123a4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3123a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3123a8: 0x0  nop
    ctx->pc = 0x3123a8u;
    // NOP
    // 0x3123ac: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x3123acu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x3123b0: 0xe6000104  swc1        $f0, 0x104($s0)
    ctx->pc = 0x3123b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 260), bits); }
    // 0x3123b4: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x3123b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3123b8: 0xae020100  sw          $v0, 0x100($s0)
    ctx->pc = 0x3123b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 256), GPR_U32(ctx, 2));
    // 0x3123bc: 0x3c02bcf5  lui         $v0, 0xBCF5
    ctx->pc = 0x3123bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48373 << 16));
    // 0x3123c0: 0x3442c28f  ori         $v0, $v0, 0xC28F
    ctx->pc = 0x3123c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49807);
    // 0x3123c4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3123c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3123c8: 0x0  nop
    ctx->pc = 0x3123c8u;
    // NOP
    // 0x3123cc: 0xe6000084  swc1        $f0, 0x84($s0)
    ctx->pc = 0x3123ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 132), bits); }
    // 0x3123d0: 0x3c023f7a  lui         $v0, 0x3F7A
    ctx->pc = 0x3123d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16250 << 16));
    // 0x3123d4: 0x34425e35  ori         $v0, $v0, 0x5E35
    ctx->pc = 0x3123d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)24117);
    // 0x3123d8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3123d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3123dc: 0x0  nop
    ctx->pc = 0x3123dcu;
    // NOP
    // 0x3123e0: 0xe60000ac  swc1        $f0, 0xAC($s0)
    ctx->pc = 0x3123e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 172), bits); }
    // 0x3123e4: 0x96020118  lhu         $v0, 0x118($s0)
    ctx->pc = 0x3123e4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 280)));
    // 0x3123e8: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x3123e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x3123ec: 0xa6020118  sh          $v0, 0x118($s0)
    ctx->pc = 0x3123ecu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 280), (uint16_t)GPR_U32(ctx, 2));
    // 0x3123f0: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x3123f0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x3123f4: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x3123F4u;
    SET_GPR_U32(ctx, 31, 0x3123FCu);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x3123F4u, 0x3123FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3123FCu;
label_3123fc:
    // 0x3123fc: 0x70408e28  paddub      $s1, $v0, $zero
    ctx->pc = 0x3123fcu;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x312400: 0x72201628  paddub      $v0, $s1, $zero
    ctx->pc = 0x312400u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x312404: 0x7bbf0020  lq          $ra, 0x20($sp)
    ctx->pc = 0x312404u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x312408: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x312408u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x31240c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x31240cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x312410: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x312410u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x312414: 0x3e00008  jr          $ra
    ctx->pc = 0x312414u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x312414u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31241Cu;
}

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

// Function: entry_002c6754
// Address: 0x2c6754 - 0x2c6860
void entry_002c6754_0x2c6754(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002c6754_0x2c6754");
#endif

    switch (ctx->pc) {
        case 0x2c67e0u: goto label_2c67e0;
        case 0x2c684cu: goto label_2c684c;
        default: break;
    }

    ctx->pc = 0x2c6754u;

    // 0x2c6754: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x2c6754u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2c6758: 0xc461128c  lwc1        $f1, 0x128C($v1)
    ctx->pc = 0x2c6758u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4748)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c675c: 0x3c03447a  lui         $v1, 0x447A
    ctx->pc = 0x2c675cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17530 << 16));
    // 0x2c6760: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2c6760u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c6764: 0x0  nop
    ctx->pc = 0x2c6764u;
    // NOP
    // 0x2c6768: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2c6768u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c676c: 0x0  nop
    ctx->pc = 0x2c676cu;
    // NOP
    // 0x2c6770: 0x4500003b  bc1f        . + 4 + (0x3B << 2)
    ctx->pc = 0x2C6770u;
    {
        const bool branch_taken_0x2c6770 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c6770) {
            ctx->pc = 0x2C6860u;
            return;
        }
    }
    ctx->pc = 0x2C6778u;
    // 0x2c6778: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x2c6778u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2c677c: 0x94630a00  lhu         $v1, 0xA00($v1)
    ctx->pc = 0x2c677cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 2560)));
    // 0x2c6780: 0x14600037  bnez        $v1, . + 4 + (0x37 << 2)
    ctx->pc = 0x2C6780u;
    {
        const bool branch_taken_0x2c6780 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c6780) {
            ctx->pc = 0x2C6860u;
            return;
        }
    }
    ctx->pc = 0x2C6788u;
    // 0x2c6788: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x2c6788u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2c678c: 0xc4620124  lwc1        $f2, 0x124($v1)
    ctx->pc = 0x2c678cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2c6790: 0x3c03442f  lui         $v1, 0x442F
    ctx->pc = 0x2c6790u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17455 << 16));
    // 0x2c6794: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2c6794u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2c6798: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x2c6798u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x2c679c: 0xc420dce4  lwc1        $f0, -0x231C($at)
    ctx->pc = 0x2c679cu;
    { uint32_t bits = FAST_READ32(0x3EDCE4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c67a0: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2c67a0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2c67a4: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x2c67a4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c67a8: 0x0  nop
    ctx->pc = 0x2c67a8u;
    // NOP
    // 0x2c67ac: 0x4501002c  bc1t        . + 4 + (0x2C << 2)
    ctx->pc = 0x2C67ACu;
    {
        const bool branch_taken_0x2c67ac = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c67ac) {
            ctx->pc = 0x2C6860u;
            return;
        }
    }
    ctx->pc = 0x2C67B4u;
    // 0x2c67b4: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x2c67b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2c67b8: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x2c67b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2c67bc: 0x80630039  lb          $v1, 0x39($v1)
    ctx->pc = 0x2c67bcu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 57)));
    // 0x2c67c0: 0x31e3c  dsll32      $v1, $v1, 24
    ctx->pc = 0x2c67c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 24));
    // 0x2c67c4: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x2c67c4u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x2c67c8: 0x28630002  slti        $v1, $v1, 0x2
    ctx->pc = 0x2c67c8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x2c67cc: 0x14600024  bnez        $v1, . + 4 + (0x24 << 2)
    ctx->pc = 0x2C67CCu;
    {
        const bool branch_taken_0x2c67cc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c67cc) {
            ctx->pc = 0x2C6860u;
            return;
        }
    }
    ctx->pc = 0x2C67D4u;
    // 0x2c67d4: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x2c67d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2c67d8: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x2C67D8u;
    SET_GPR_U32(ctx, 31, 0x2C67E0u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x2C67D8u, 0x2C67E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C67E0u;
label_2c67e0:
    // 0x2c67e0: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2c67e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2c67e4: 0x244200d0  addiu       $v0, $v0, 0xD0
    ctx->pc = 0x2c67e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 208));
    // 0x2c67e8: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x2c67e8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2c67ec: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x2c67ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2c67f0: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x2c67f0u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x2c67f4: 0x3c023fc9  lui         $v0, 0x3FC9
    ctx->pc = 0x2c67f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16329 << 16));
    // 0x2c67f8: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x2c67f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x2c67fc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c67fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c6800: 0x0  nop
    ctx->pc = 0x2c6800u;
    // NOP
    // 0x2c6804: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x2c6804u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x2c6808: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2c6808u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2c680c: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x2c680cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2c6810: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x2c6810u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x2c6814: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x2c6814u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2c6818: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x2c6818u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x2c681c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2c681cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2c6820: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2c6820u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2c6824: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2c6824u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2c6828: 0x34440007  ori         $a0, $v0, 0x7
    ctx->pc = 0x2c6828u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)7);
    // 0x2c682c: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2c682cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2c6830: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x2c6830u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x2c6834: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x2c6834u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2c6838: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x2c6838u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2c683c: 0x24470080  addiu       $a3, $v0, 0x80
    ctx->pc = 0x2c683cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
    // 0x2c6840: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x2c6840u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2c6844: 0xc06371c  jal         func_18DC70
    ctx->pc = 0x2C6844u;
    SET_GPR_U32(ctx, 31, 0x2C684Cu);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x2C6844u, 0x2C684Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C684Cu;
label_2c684c:
    // 0x2c684c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x2c684cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2c6850: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x2c6850u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2c6854: 0x80830039  lb          $v1, 0x39($a0)
    ctx->pc = 0x2c6854u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 57)));
    // 0x2c6858: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2c6858u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2c685c: 0xa0830039  sb          $v1, 0x39($a0)
    ctx->pc = 0x2c685cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 57), (uint8_t)GPR_U32(ctx, 3));
    ctx->pc = 0x2c6860u;
}

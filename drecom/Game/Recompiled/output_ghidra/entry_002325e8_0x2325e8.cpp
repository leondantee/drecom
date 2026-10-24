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

// Function: entry_002325e8
// Address: 0x2325e8 - 0x23271c
void entry_002325e8_0x2325e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002325e8_0x2325e8");
#endif

    switch (ctx->pc) {
        case 0x232678u: goto label_232678;
        case 0x2326f0u: goto label_2326f0;
        case 0x2326fcu: goto label_2326fc;
        default: break;
    }

    ctx->pc = 0x2325e8u;

    // 0x2325e8: 0x26050150  addiu       $a1, $s0, 0x150
    ctx->pc = 0x2325e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x2325ec: 0xc4a1001c  lwc1        $f1, 0x1C($a1)
    ctx->pc = 0x2325ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2325f0: 0x3c034120  lui         $v1, 0x4120
    ctx->pc = 0x2325f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16672 << 16));
    // 0x2325f4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2325f4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2325f8: 0x0  nop
    ctx->pc = 0x2325f8u;
    // NOP
    // 0x2325fc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2325fcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x232600: 0x0  nop
    ctx->pc = 0x232600u;
    // NOP
    // 0x232604: 0x4500008a  bc1f        . + 4 + (0x8A << 2)
    ctx->pc = 0x232604u;
    {
        const bool branch_taken_0x232604 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x232604) {
            ctx->pc = 0x232830u;
            return;
        }
    }
    ctx->pc = 0x23260Cu;
    // 0x23260c: 0xafb10170  sw          $s1, 0x170($sp)
    ctx->pc = 0x23260cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 368), GPR_U32(ctx, 17));
    // 0x232610: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x232610u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x232614: 0x0  nop
    ctx->pc = 0x232614u;
    // NOP
    // 0x232618: 0xe7a00180  swc1        $f0, 0x180($sp)
    ctx->pc = 0x232618u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 384), bits); }
    // 0x23261c: 0x3c0442c8  lui         $a0, 0x42C8
    ctx->pc = 0x23261cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17096 << 16));
    // 0x232620: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x232620u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x232624: 0x0  nop
    ctx->pc = 0x232624u;
    // NOP
    // 0x232628: 0xe7a00184  swc1        $f0, 0x184($sp)
    ctx->pc = 0x232628u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 388), bits); }
    // 0x23262c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x23262cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x232630: 0x0  nop
    ctx->pc = 0x232630u;
    // NOP
    // 0x232634: 0xe7a00188  swc1        $f0, 0x188($sp)
    ctx->pc = 0x232634u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 392), bits); }
    // 0x232638: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x232638u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x23263c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x23263cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x232640: 0x0  nop
    ctx->pc = 0x232640u;
    // NOP
    // 0x232644: 0xe7ac018c  swc1        $f12, 0x18C($sp)
    ctx->pc = 0x232644u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 396), bits); }
    // 0x232648: 0x3c024396  lui         $v0, 0x4396
    ctx->pc = 0x232648u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17302 << 16));
    // 0x23264c: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x23264cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x232650: 0x0  nop
    ctx->pc = 0x232650u;
    // NOP
    // 0x232654: 0xe7ad0190  swc1        $f13, 0x190($sp)
    ctx->pc = 0x232654u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 400), bits); }
    // 0x232658: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x232658u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x23265c: 0xa7a20194  sh          $v0, 0x194($sp)
    ctx->pc = 0x23265cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 404), (uint16_t)GPR_U32(ctx, 2));
    // 0x232660: 0xa3a00196  sb          $zero, 0x196($sp)
    ctx->pc = 0x232660u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 406), (uint8_t)GPR_U32(ctx, 0));
    // 0x232664: 0xa3a00197  sb          $zero, 0x197($sp)
    ctx->pc = 0x232664u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 407), (uint8_t)GPR_U32(ctx, 0));
    // 0x232668: 0x8fa401d8  lw          $a0, 0x1D8($sp)
    ctx->pc = 0x232668u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 472)));
    // 0x23266c: 0x27a50170  addiu       $a1, $sp, 0x170
    ctx->pc = 0x23266cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
    // 0x232670: 0xc06ce90  jal         func_1B3A40
    ctx->pc = 0x232670u;
    SET_GPR_U32(ctx, 31, 0x232678u);
    ctx->pc = 0x1B3A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B3A40u, 0x232670u, 0x232678u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x232678u;
label_232678:
    // 0x232678: 0x1040006d  beqz        $v0, . + 4 + (0x6D << 2)
    ctx->pc = 0x232678u;
    {
        const bool branch_taken_0x232678 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x232678) {
            ctx->pc = 0x232830u;
            return;
        }
    }
    ctx->pc = 0x232680u;
    // 0x232680: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x232680u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x232684: 0x0  nop
    ctx->pc = 0x232684u;
    // NOP
    // 0x232688: 0xe7ae01a0  swc1        $f14, 0x1A0($sp)
    ctx->pc = 0x232688u;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 416), bits); }
    // 0x23268c: 0x44807800  mtc1        $zero, $f15
    ctx->pc = 0x23268cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x232690: 0x0  nop
    ctx->pc = 0x232690u;
    // NOP
    // 0x232694: 0xe7af01a4  swc1        $f15, 0x1A4($sp)
    ctx->pc = 0x232694u;
    { float f = ctx->f[15]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 420), bits); }
    // 0x232698: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x232698u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x23269c: 0x0  nop
    ctx->pc = 0x23269cu;
    // NOP
    // 0x2326a0: 0xe7a101a8  swc1        $f1, 0x1A8($sp)
    ctx->pc = 0x2326a0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 424), bits); }
    // 0x2326a4: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x2326a4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
    // 0x2326a8: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x2326a8u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2326ac: 0x0  nop
    ctx->pc = 0x2326acu;
    // NOP
    // 0x2326b0: 0xe7a001ac  swc1        $f0, 0x1AC($sp)
    ctx->pc = 0x2326b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 428), bits); }
    // 0x2326b4: 0x8fa501d8  lw          $a1, 0x1D8($sp)
    ctx->pc = 0x2326b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 472)));
    // 0x2326b8: 0x5103c  dsll32      $v0, $a1, 0
    ctx->pc = 0x2326b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 0));
    // 0x2326bc: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x2326bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x2326c0: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x2326c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2326c4: 0x32438  dsll        $a0, $v1, 16
    ctx->pc = 0x2326c4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << 16);
    // 0x2326c8: 0x3485ffff  ori         $a1, $a0, 0xFFFF
    ctx->pc = 0x2326c8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x2326cc: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x2326ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x2326d0: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x2326d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2326d4: 0x34640006  ori         $a0, $v1, 0x6
    ctx->pc = 0x2326d4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)6);
    // 0x2326d8: 0x27a501a0  addiu       $a1, $sp, 0x1A0
    ctx->pc = 0x2326d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
    // 0x2326dc: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x2326dcu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2326e0: 0x72203e28  paddub      $a3, $s1, $zero
    ctx->pc = 0x2326e0u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x2326e4: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x2326e4u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2326e8: 0xc06371c  jal         func_18DC70
    ctx->pc = 0x2326E8u;
    SET_GPR_U32(ctx, 31, 0x2326F0u);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x2326E8u, 0x2326F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2326F0u;
label_2326f0:
    // 0x2326f0: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x2326f0u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2326f4: 0xc067694  jal         func_19DA50
    ctx->pc = 0x2326F4u;
    SET_GPR_U32(ctx, 31, 0x2326FCu);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x2326F4u, 0x2326FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2326FCu;
label_2326fc:
    // 0x2326fc: 0x70403e28  paddub      $a3, $v0, $zero
    ctx->pc = 0x2326fcu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x232700: 0x4e00006  bltz        $a3, . + 4 + (0x6 << 2)
    ctx->pc = 0x232700u;
    {
        const bool branch_taken_0x232700 = (GPR_S32(ctx, 7) < 0);
        if (branch_taken_0x232700) {
            ctx->pc = 0x23271Cu;
            return;
        }
    }
    ctx->pc = 0x232708u;
    // 0x232708: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x232708u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23270c: 0x0  nop
    ctx->pc = 0x23270cu;
    // NOP
    // 0x232710: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x232710u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x232714: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x232714u;
    {
        const bool branch_taken_0x232714 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x232714) {
            ctx->pc = 0x232738u;
            return;
        }
    }
    ctx->pc = 0x23271Cu;
}

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

// Function: entry_0037b618
// Address: 0x37b618 - 0x37b71c
void entry_0037b618_0x37b618(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0037b618_0x37b618");
#endif

    switch (ctx->pc) {
        case 0x37b660u: goto label_37b660;
        case 0x37b694u: goto label_37b694;
        case 0x37b6c0u: goto label_37b6c0;
        case 0x37b6f0u: goto label_37b6f0;
        case 0x37b718u: goto label_37b718;
        default: break;
    }

    ctx->pc = 0x37b618u;

    // 0x37b618: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x37b618u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
    // 0x37b61c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x37b61cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x37b620: 0x3c01009a  lui         $at, 0x9A
    ctx->pc = 0x37b620u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)154 << 16));
    // 0x37b624: 0x8c220a70  lw          $v0, 0xA70($at)
    ctx->pc = 0x37b624u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x9A0A70u));
    // 0x37b628: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x37b628u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x37b62c: 0x0  nop
    ctx->pc = 0x37b62cu;
    // NOP
    // 0x37b630: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x37b630u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x37b634: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x37b634u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x37b638: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x37b638u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
    // 0x37b63c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x37b63cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x37b640: 0x0  nop
    ctx->pc = 0x37b640u;
    // NOP
    // 0x37b644: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x37b644u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x37b648: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x37b648u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x37b64c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x37b64cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x37b650: 0x0  nop
    ctx->pc = 0x37b650u;
    // NOP
    // 0x37b654: 0x46010302  mul.s       $f12, $f0, $f1
    ctx->pc = 0x37b654u;
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x37b658: 0xc047fa2  jal         func_11FE88
    ctx->pc = 0x37B658u;
    SET_GPR_U32(ctx, 31, 0x37B660u);
    ctx->pc = 0x11FE88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FE88u, 0x37B658u, 0x37B660u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37B660u;
label_37b660:
    // 0x37b660: 0x7040b628  paddub      $s6, $v0, $zero
    ctx->pc = 0x37b660u;
    SET_GPR_VEC(ctx, 22, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x37b664: 0x161c00  sll         $v1, $s6, 16
    ctx->pc = 0x37b664u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 22), 16));
    // 0x37b668: 0x161200  sll         $v0, $s6, 8
    ctx->pc = 0x37b668u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 22), 8));
    // 0x37b66c: 0x2c21025  or          $v0, $s6, $v0
    ctx->pc = 0x37b66cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 22) | GPR_U64(ctx, 2));
    // 0x37b670: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x37b670u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x37b674: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x37b674u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x37b678: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x37b678u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x37b67c: 0x26420010  addiu       $v0, $s2, 0x10
    ctx->pc = 0x37b67cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x37b680: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x37b680u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x37b684: 0x26240018  addiu       $a0, $s1, 0x18
    ctx->pc = 0x37b684u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 24));
    // 0x37b688: 0x72402e28  paddub      $a1, $s2, $zero
    ctx->pc = 0x37b688u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x37b68c: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x37B68Cu;
    SET_GPR_U32(ctx, 31, 0x37B694u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x37B68Cu, 0x37B694u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37B694u;
label_37b694:
    // 0x37b694: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x37b694u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x37b698: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x37b698u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x37b69c: 0x3c020400  lui         $v0, 0x400
    ctx->pc = 0x37b69cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
    // 0x37b6a0: 0x34421015  ori         $v0, $v0, 0x1015
    ctx->pc = 0x37b6a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4117);
    // 0x37b6a4: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x37b6a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x37b6a8: 0x24020060  addiu       $v0, $zero, 0x60
    ctx->pc = 0x37b6a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x37b6ac: 0xfe020008  sd          $v0, 0x8($s0)
    ctx->pc = 0x37b6acu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 2));
    // 0x37b6b0: 0x26240018  addiu       $a0, $s1, 0x18
    ctx->pc = 0x37b6b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 24));
    // 0x37b6b4: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x37b6b4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x37b6b8: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x37B6B8u;
    SET_GPR_U32(ctx, 31, 0x37B6C0u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x37B6B8u, 0x37B6C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37B6C0u;
label_37b6c0:
    // 0x37b6c0: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x37b6c0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x37b6c4: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x37b6c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x37b6c8: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x37b6c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x37b6cc: 0x3c020400  lui         $v0, 0x400
    ctx->pc = 0x37b6ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
    // 0x37b6d0: 0x34421043  ori         $v0, $v0, 0x1043
    ctx->pc = 0x37b6d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4163);
    // 0x37b6d4: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x37b6d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x37b6d8: 0x24020044  addiu       $v0, $zero, 0x44
    ctx->pc = 0x37b6d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    // 0x37b6dc: 0xfe020008  sd          $v0, 0x8($s0)
    ctx->pc = 0x37b6dcu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 2));
    // 0x37b6e0: 0x26240018  addiu       $a0, $s1, 0x18
    ctx->pc = 0x37b6e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 24));
    // 0x37b6e4: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x37b6e4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x37b6e8: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x37B6E8u;
    SET_GPR_U32(ctx, 31, 0x37B6F0u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x37B6E8u, 0x37B6F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37B6F0u;
label_37b6f0:
    // 0x37b6f0: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x37b6f0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x37b6f4: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x37b6f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x37b6f8: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x37b6f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x37b6fc: 0x3c020400  lui         $v0, 0x400
    ctx->pc = 0x37b6fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
    // 0x37b700: 0x3442103f  ori         $v0, $v0, 0x103F
    ctx->pc = 0x37b700u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4159);
    // 0x37b704: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x37b704u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x37b708: 0x26240018  addiu       $a0, $s1, 0x18
    ctx->pc = 0x37b708u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 24));
    // 0x37b70c: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x37b70cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x37b710: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x37B710u;
    SET_GPR_U32(ctx, 31, 0x37B718u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x37B710u, 0x37B718u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37B718u;
label_37b718:
    // 0x37b718: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x37b718u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    ctx->pc = 0x37b71cu;
}

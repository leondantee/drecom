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

// Function: entry_0037bb00
// Address: 0x37bb00 - 0x37bbf8
void entry_0037bb00_0x37bb00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0037bb00_0x37bb00");
#endif

    switch (ctx->pc) {
        case 0x37bb3cu: goto label_37bb3c;
        case 0x37bb70u: goto label_37bb70;
        case 0x37bb9cu: goto label_37bb9c;
        case 0x37bbccu: goto label_37bbcc;
        case 0x37bbf4u: goto label_37bbf4;
        default: break;
    }

    ctx->pc = 0x37bb00u;

    // 0x37bb00: 0x3c01009a  lui         $at, 0x9A
    ctx->pc = 0x37bb00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)154 << 16));
    // 0x37bb04: 0x8c220bb0  lw          $v0, 0xBB0($at)
    ctx->pc = 0x37bb04u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x9A0BB0u));
    // 0x37bb08: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x37bb08u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x37bb0c: 0x0  nop
    ctx->pc = 0x37bb0cu;
    // NOP
    // 0x37bb10: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x37bb10u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x37bb14: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x37bb14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
    // 0x37bb18: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x37bb18u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x37bb1c: 0x0  nop
    ctx->pc = 0x37bb1cu;
    // NOP
    // 0x37bb20: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x37bb20u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x37bb24: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x37bb24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x37bb28: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x37bb28u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x37bb2c: 0x0  nop
    ctx->pc = 0x37bb2cu;
    // NOP
    // 0x37bb30: 0x46010302  mul.s       $f12, $f0, $f1
    ctx->pc = 0x37bb30u;
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x37bb34: 0xc047fa2  jal         func_11FE88
    ctx->pc = 0x37BB34u;
    SET_GPR_U32(ctx, 31, 0x37BB3Cu);
    ctx->pc = 0x11FE88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FE88u, 0x37BB34u, 0x37BB3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37BB3Cu;
label_37bb3c:
    // 0x37bb3c: 0x7040b628  paddub      $s6, $v0, $zero
    ctx->pc = 0x37bb3cu;
    SET_GPR_VEC(ctx, 22, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x37bb40: 0x161c00  sll         $v1, $s6, 16
    ctx->pc = 0x37bb40u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 22), 16));
    // 0x37bb44: 0x161200  sll         $v0, $s6, 8
    ctx->pc = 0x37bb44u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 22), 8));
    // 0x37bb48: 0x2c21025  or          $v0, $s6, $v0
    ctx->pc = 0x37bb48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 22) | GPR_U64(ctx, 2));
    // 0x37bb4c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x37bb4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x37bb50: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x37bb50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x37bb54: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x37bb54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x37bb58: 0x26820010  addiu       $v0, $s4, 0x10
    ctx->pc = 0x37bb58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
    // 0x37bb5c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x37bb5cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x37bb60: 0x26240018  addiu       $a0, $s1, 0x18
    ctx->pc = 0x37bb60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 24));
    // 0x37bb64: 0x72802e28  paddub      $a1, $s4, $zero
    ctx->pc = 0x37bb64u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
    // 0x37bb68: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x37BB68u;
    SET_GPR_U32(ctx, 31, 0x37BB70u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x37BB68u, 0x37BB70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37BB70u;
label_37bb70:
    // 0x37bb70: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x37bb70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x37bb74: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x37bb74u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x37bb78: 0x3c020400  lui         $v0, 0x400
    ctx->pc = 0x37bb78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
    // 0x37bb7c: 0x34421015  ori         $v0, $v0, 0x1015
    ctx->pc = 0x37bb7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4117);
    // 0x37bb80: 0xae420004  sw          $v0, 0x4($s2)
    ctx->pc = 0x37bb80u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
    // 0x37bb84: 0x24020060  addiu       $v0, $zero, 0x60
    ctx->pc = 0x37bb84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x37bb88: 0xfe420008  sd          $v0, 0x8($s2)
    ctx->pc = 0x37bb88u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 8), GPR_U64(ctx, 2));
    // 0x37bb8c: 0x26240018  addiu       $a0, $s1, 0x18
    ctx->pc = 0x37bb8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 24));
    // 0x37bb90: 0x72402e28  paddub      $a1, $s2, $zero
    ctx->pc = 0x37bb90u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x37bb94: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x37BB94u;
    SET_GPR_U32(ctx, 31, 0x37BB9Cu);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x37BB94u, 0x37BB9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37BB9Cu;
label_37bb9c:
    // 0x37bb9c: 0x26520010  addiu       $s2, $s2, 0x10
    ctx->pc = 0x37bb9cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x37bba0: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x37bba0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x37bba4: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x37bba4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x37bba8: 0x3c020400  lui         $v0, 0x400
    ctx->pc = 0x37bba8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
    // 0x37bbac: 0x34421043  ori         $v0, $v0, 0x1043
    ctx->pc = 0x37bbacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4163);
    // 0x37bbb0: 0xae420004  sw          $v0, 0x4($s2)
    ctx->pc = 0x37bbb0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
    // 0x37bbb4: 0x24020044  addiu       $v0, $zero, 0x44
    ctx->pc = 0x37bbb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    // 0x37bbb8: 0xfe420008  sd          $v0, 0x8($s2)
    ctx->pc = 0x37bbb8u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 8), GPR_U64(ctx, 2));
    // 0x37bbbc: 0x26240018  addiu       $a0, $s1, 0x18
    ctx->pc = 0x37bbbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 24));
    // 0x37bbc0: 0x72402e28  paddub      $a1, $s2, $zero
    ctx->pc = 0x37bbc0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x37bbc4: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x37BBC4u;
    SET_GPR_U32(ctx, 31, 0x37BBCCu);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x37BBC4u, 0x37BBCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37BBCCu;
label_37bbcc:
    // 0x37bbcc: 0x26520010  addiu       $s2, $s2, 0x10
    ctx->pc = 0x37bbccu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x37bbd0: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x37bbd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x37bbd4: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x37bbd4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x37bbd8: 0x3c020400  lui         $v0, 0x400
    ctx->pc = 0x37bbd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
    // 0x37bbdc: 0x3442103f  ori         $v0, $v0, 0x103F
    ctx->pc = 0x37bbdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4159);
    // 0x37bbe0: 0xae420004  sw          $v0, 0x4($s2)
    ctx->pc = 0x37bbe0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
    // 0x37bbe4: 0x26240018  addiu       $a0, $s1, 0x18
    ctx->pc = 0x37bbe4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 24));
    // 0x37bbe8: 0x72402e28  paddub      $a1, $s2, $zero
    ctx->pc = 0x37bbe8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x37bbec: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x37BBECu;
    SET_GPR_U32(ctx, 31, 0x37BBF4u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x37BBECu, 0x37BBF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37BBF4u;
label_37bbf4:
    // 0x37bbf4: 0x26520010  addiu       $s2, $s2, 0x10
    ctx->pc = 0x37bbf4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    ctx->pc = 0x37bbf8u;
}

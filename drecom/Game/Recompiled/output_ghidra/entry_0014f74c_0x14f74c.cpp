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

// Function: entry_0014f74c
// Address: 0x14f74c - 0x14f7f8
void entry_0014f74c_0x14f74c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014f74c_0x14f74c");
#endif

    switch (ctx->pc) {
        case 0x14f7bcu: goto label_14f7bc;
        case 0x14f7c8u: goto label_14f7c8;
        default: break;
    }

    ctx->pc = 0x14f74cu;

    // 0x14f74c: 0x8ec20130  lw          $v0, 0x130($s6)
    ctx->pc = 0x14f74cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 304)));
    // 0x14f750: 0x24420740  addiu       $v0, $v0, 0x740
    ctx->pc = 0x14f750u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1856));
    // 0x14f754: 0xae4200c0  sw          $v0, 0xC0($s2)
    ctx->pc = 0x14f754u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 192), GPR_U32(ctx, 2));
    // 0x14f758: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x14f758u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14f75c: 0x0  nop
    ctx->pc = 0x14f75cu;
    // NOP
    // 0x14f760: 0xe64000d0  swc1        $f0, 0xD0($s2)
    ctx->pc = 0x14f760u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 208), bits); }
    // 0x14f764: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x14f764u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14f768: 0x0  nop
    ctx->pc = 0x14f768u;
    // NOP
    // 0x14f76c: 0xe64000d4  swc1        $f0, 0xD4($s2)
    ctx->pc = 0x14f76cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 212), bits); }
    // 0x14f770: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x14f770u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14f774: 0x0  nop
    ctx->pc = 0x14f774u;
    // NOP
    // 0x14f778: 0xe64000d8  swc1        $f0, 0xD8($s2)
    ctx->pc = 0x14f778u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 216), bits); }
    // 0x14f77c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x14f77cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14f780: 0x0  nop
    ctx->pc = 0x14f780u;
    // NOP
    // 0x14f784: 0xe6400120  swc1        $f0, 0x120($s2)
    ctx->pc = 0x14f784u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 288), bits); }
    // 0x14f788: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x14f788u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14f78c: 0x0  nop
    ctx->pc = 0x14f78cu;
    // NOP
    // 0x14f790: 0xe6400124  swc1        $f0, 0x124($s2)
    ctx->pc = 0x14f790u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 292), bits); }
    // 0x14f794: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x14f794u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14f798: 0x0  nop
    ctx->pc = 0x14f798u;
    // NOP
    // 0x14f79c: 0xe6400128  swc1        $f0, 0x128($s2)
    ctx->pc = 0x14f79cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 296), bits); }
    // 0x14f7a0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x14f7a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x14f7a4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x14f7a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14f7a8: 0x0  nop
    ctx->pc = 0x14f7a8u;
    // NOP
    // 0x14f7ac: 0xe640012c  swc1        $f0, 0x12C($s2)
    ctx->pc = 0x14f7acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 300), bits); }
    // 0x14f7b0: 0x72402628  paddub      $a0, $s2, $zero
    ctx->pc = 0x14f7b0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x14f7b4: 0xc097a5c  jal         func_25E970
    ctx->pc = 0x14F7B4u;
    SET_GPR_U32(ctx, 31, 0x14F7BCu);
    ctx->pc = 0x25E970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25E970u, 0x14F7B4u, 0x14F7BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14F7BCu;
label_14f7bc:
    // 0x14f7bc: 0x72402628  paddub      $a0, $s2, $zero
    ctx->pc = 0x14f7bcu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x14f7c0: 0xc05c04c  jal         func_170130
    ctx->pc = 0x14F7C0u;
    SET_GPR_U32(ctx, 31, 0x14F7C8u);
    ctx->pc = 0x170130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x170130u, 0x14F7C0u, 0x14F7C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14F7C8u;
label_14f7c8:
    // 0x14f7c8: 0x926213f8  lbu         $v0, 0x13F8($s3)
    ctx->pc = 0x14f7c8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 5112)));
    // 0x14f7cc: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x14f7ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x14f7d0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x14f7d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14f7d4: 0x1462002c  bne         $v1, $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x14F7D4u;
    {
        const bool branch_taken_0x14f7d4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x14f7d4) {
            ctx->pc = 0x14F888u;
            return;
        }
    }
    ctx->pc = 0x14F7DCu;
    // 0x14f7dc: 0x926213f8  lbu         $v0, 0x13F8($s3)
    ctx->pc = 0x14f7dcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 5112)));
    // 0x14f7e0: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x14f7e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x14f7e4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x14f7e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14f7e8: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x14F7E8u;
    {
        const bool branch_taken_0x14f7e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x14f7e8) {
            ctx->pc = 0x14F7F8u;
            return;
        }
    }
    ctx->pc = 0x14F7F0u;
    // 0x14f7f0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x14F7F0u;
    {
        const bool branch_taken_0x14f7f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14f7f0) {
            ctx->pc = 0x14F804u;
            return;
        }
    }
    ctx->pc = 0x14F7F8u;
}

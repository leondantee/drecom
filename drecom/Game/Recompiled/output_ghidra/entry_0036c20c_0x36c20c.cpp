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

// Function: entry_0036c20c
// Address: 0x36c20c - 0x36c2ac
void entry_0036c20c_0x36c20c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0036c20c_0x36c20c");
#endif

    switch (ctx->pc) {
        case 0x36c264u: goto label_36c264;
        case 0x36c270u: goto label_36c270;
        case 0x36c2a0u: goto label_36c2a0;
        default: break;
    }

    ctx->pc = 0x36c20cu;

    // 0x36c20c: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x36c20cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x36c210: 0x904209db  lbu         $v0, 0x9DB($v0)
    ctx->pc = 0x36c210u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2523)));
    // 0x36c214: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x36c214u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x36c218: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x36c218u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x36c21c: 0x10400023  beqz        $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x36C21Cu;
    {
        const bool branch_taken_0x36c21c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x36c21c) {
            ctx->pc = 0x36C2ACu;
            return;
        }
    }
    ctx->pc = 0x36C224u;
    // 0x36c224: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x36c224u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
    // 0x36c228: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x36c228u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x36c22c: 0x0  nop
    ctx->pc = 0x36c22cu;
    // NOP
    // 0x36c230: 0xe7a0009c  swc1        $f0, 0x9C($sp)
    ctx->pc = 0x36c230u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
    // 0x36c234: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x36c234u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x36c238: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x36c238u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x36c23c: 0x244204f0  addiu       $v0, $v0, 0x4F0
    ctx->pc = 0x36c23cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1264));
    // 0x36c240: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x36c240u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x36c244: 0x27a20090  addiu       $v0, $sp, 0x90
    ctx->pc = 0x36c244u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x36c248: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x36c248u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x36c24c: 0x24040500  addiu       $a0, $zero, 0x500
    ctx->pc = 0x36c24cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1280));
    // 0x36c250: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x36c250u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x36c254: 0x27a60090  addiu       $a2, $sp, 0x90
    ctx->pc = 0x36c254u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x36c258: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x36c258u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x36c25c: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x36C25Cu;
    SET_GPR_U32(ctx, 31, 0x36C264u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x36C25Cu, 0x36C264u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36C264u;
label_36c264:
    // 0x36c264: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x36c264u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x36c268: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x36C268u;
    SET_GPR_U32(ctx, 31, 0x36C270u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x36C268u, 0x36C270u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36C270u;
label_36c270:
    // 0x36c270: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x36c270u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x36c274: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x36c274u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x36c278: 0x244205b0  addiu       $v0, $v0, 0x5B0
    ctx->pc = 0x36c278u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1456));
    // 0x36c27c: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x36c27cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x36c280: 0x27a20090  addiu       $v0, $sp, 0x90
    ctx->pc = 0x36c280u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x36c284: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x36c284u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x36c288: 0x24040500  addiu       $a0, $zero, 0x500
    ctx->pc = 0x36c288u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1280));
    // 0x36c28c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x36c28cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x36c290: 0x27a60090  addiu       $a2, $sp, 0x90
    ctx->pc = 0x36c290u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x36c294: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x36c294u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x36c298: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x36C298u;
    SET_GPR_U32(ctx, 31, 0x36C2A0u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x36C298u, 0x36C2A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36C2A0u;
label_36c2a0:
    // 0x36c2a0: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x36c2a0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x36c2a4: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x36C2A4u;
    SET_GPR_U32(ctx, 31, 0x36C2ACu);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x36C2A4u, 0x36C2ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36C2ACu;
}

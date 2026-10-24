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

// Function: entry_001da610
// Address: 0x1da610 - 0x1da6f4
void entry_001da610_0x1da610(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001da610_0x1da610");
#endif

    switch (ctx->pc) {
        case 0x1da634u: goto label_1da634;
        case 0x1da65cu: goto label_1da65c;
        default: break;
    }

    ctx->pc = 0x1da610u;

    // 0x1da610: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x1da610u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x1da614: 0x8c520008  lw          $s2, 0x8($v0)
    ctx->pc = 0x1da614u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1da618: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x1da618u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1da61c: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x1da61cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x1da620: 0xac430024  sw          $v1, 0x24($v0)
    ctx->pc = 0x1da620u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 36), GPR_U32(ctx, 3));
    // 0x1da624: 0x8fa400d8  lw          $a0, 0xD8($sp)
    ctx->pc = 0x1da624u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1da628: 0x72402e28  paddub      $a1, $s2, $zero
    ctx->pc = 0x1da628u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x1da62c: 0xc095bc4  jal         func_256F10
    ctx->pc = 0x1DA62Cu;
    SET_GPR_U32(ctx, 31, 0x1DA634u);
    ctx->pc = 0x256F10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x256F10u, 0x1DA62Cu, 0x1DA634u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DA634u;
label_1da634:
    // 0x1da634: 0x8fa200d8  lw          $v0, 0xD8($sp)
    ctx->pc = 0x1da634u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1da638: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x1da638u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x1da63c: 0xafa200d8  sw          $v0, 0xD8($sp)
    ctx->pc = 0x1da63cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 216), GPR_U32(ctx, 2));
    // 0x1da640: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x1da640u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1da644: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x1da644u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x1da648: 0xac430028  sw          $v1, 0x28($v0)
    ctx->pc = 0x1da648u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 3));
    // 0x1da64c: 0x8fa400d8  lw          $a0, 0xD8($sp)
    ctx->pc = 0x1da64cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1da650: 0x72402e28  paddub      $a1, $s2, $zero
    ctx->pc = 0x1da650u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x1da654: 0xc095bc4  jal         func_256F10
    ctx->pc = 0x1DA654u;
    SET_GPR_U32(ctx, 31, 0x1DA65Cu);
    ctx->pc = 0x256F10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x256F10u, 0x1DA654u, 0x1DA65Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DA65Cu;
label_1da65c:
    // 0x1da65c: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x1da65cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x1da660: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x1da660u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x1da664: 0xac430060  sw          $v1, 0x60($v0)
    ctx->pc = 0x1da664u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 96), GPR_U32(ctx, 3));
    // 0x1da668: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x1da668u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x1da66c: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x1da66cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x1da670: 0xac430064  sw          $v1, 0x64($v0)
    ctx->pc = 0x1da670u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 100), GPR_U32(ctx, 3));
    // 0x1da674: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x1da674u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x1da678: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x1da678u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x1da67c: 0xac430068  sw          $v1, 0x68($v0)
    ctx->pc = 0x1da67cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 104), GPR_U32(ctx, 3));
    // 0x1da680: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x1da680u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x1da684: 0xac40006c  sw          $zero, 0x6C($v0)
    ctx->pc = 0x1da684u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 108), GPR_U32(ctx, 0));
    // 0x1da688: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x1da688u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1da68c: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x1da68cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x1da690: 0xac43007c  sw          $v1, 0x7C($v0)
    ctx->pc = 0x1da690u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 124), GPR_U32(ctx, 3));
    // 0x1da694: 0x32420e00  andi        $v0, $s2, 0xE00
    ctx->pc = 0x1da694u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)3584);
    // 0x1da698: 0x10400035  beqz        $v0, . + 4 + (0x35 << 2)
    ctx->pc = 0x1DA698u;
    {
        const bool branch_taken_0x1da698 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1da698) {
            ctx->pc = 0x1DA770u;
            return;
        }
    }
    ctx->pc = 0x1DA6A0u;
    // 0x1da6a0: 0x8fa300c0  lw          $v1, 0xC0($sp)
    ctx->pc = 0x1da6a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1da6a4: 0x90620003  lbu         $v0, 0x3($v1)
    ctx->pc = 0x1da6a4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 3)));
    // 0x1da6a8: 0x34420040  ori         $v0, $v0, 0x40
    ctx->pc = 0x1da6a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
    // 0x1da6ac: 0xa0620003  sb          $v0, 0x3($v1)
    ctx->pc = 0x1da6acu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 2));
    // 0x1da6b0: 0x32420e00  andi        $v0, $s2, 0xE00
    ctx->pc = 0x1da6b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)3584);
    // 0x1da6b4: 0x21242  srl         $v0, $v0, 9
    ctx->pc = 0x1da6b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 9));
    // 0x1da6b8: 0x2c410005  sltiu       $at, $v0, 0x5
    ctx->pc = 0x1da6b8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x1da6bc: 0x14200014  bnez        $at, . + 4 + (0x14 << 2)
    ctx->pc = 0x1DA6BCu;
    {
        const bool branch_taken_0x1da6bc = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1da6bc) {
            ctx->pc = 0x1DA710u;
            return;
        }
    }
    ctx->pc = 0x1DA6C4u;
    // 0x1da6c4: 0x32420e00  andi        $v0, $s2, 0xE00
    ctx->pc = 0x1da6c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)3584);
    // 0x1da6c8: 0x21a42  srl         $v1, $v0, 9
    ctx->pc = 0x1da6c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 9));
    // 0x1da6cc: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x1da6ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1da6d0: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1DA6D0u;
    {
        const bool branch_taken_0x1da6d0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1da6d0) {
            ctx->pc = 0x1DA6F4u;
            return;
        }
    }
    ctx->pc = 0x1DA6D8u;
    // 0x1da6d8: 0x3c023e4c  lui         $v0, 0x3E4C
    ctx->pc = 0x1da6d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15948 << 16));
    // 0x1da6dc: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x1da6dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x1da6e0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1da6e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1da6e4: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x1da6e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x1da6e8: 0xe440007c  swc1        $f0, 0x7C($v0)
    ctx->pc = 0x1da6e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 124), bits); }
    // 0x1da6ec: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x1DA6ECu;
    {
        const bool branch_taken_0x1da6ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1da6ec) {
            ctx->pc = 0x1DA770u;
            return;
        }
    }
    ctx->pc = 0x1DA6F4u;
}

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

// Function: entry_0035e598
// Address: 0x35e598 - 0x35e6e0
void entry_0035e598_0x35e598(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0035e598_0x35e598");
#endif

    switch (ctx->pc) {
        case 0x35e5acu: goto label_35e5ac;
        case 0x35e6c4u: goto label_35e6c4;
        default: break;
    }

    ctx->pc = 0x35e598u;

    // 0x35e598: 0x7240a628  paddub      $s4, $s2, $zero
    ctx->pc = 0x35e598u;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x35e59c: 0x27a4007c  addiu       $a0, $sp, 0x7C
    ctx->pc = 0x35e59cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 124));
    // 0x35e5a0: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x35e5a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x35e5a4: 0xc040aa4  jal         func_102A90
    ctx->pc = 0x35E5A4u;
    SET_GPR_U32(ctx, 31, 0x35E5ACu);
    ctx->pc = 0x102A90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102A90u, 0x35E5A4u, 0x35E5ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35E5ACu;
label_35e5ac:
    // 0x35e5ac: 0xafa2007c  sw          $v0, 0x7C($sp)
    ctx->pc = 0x35e5acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 2));
    // 0x35e5b0: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x35e5b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x35e5b4: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x35e5b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x35e5b8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x35e5b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x35e5bc: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x35e5bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x35e5c0: 0x8fa2007c  lw          $v0, 0x7C($sp)
    ctx->pc = 0x35e5c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
    // 0x35e5c4: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x35e5c4u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x35e5c8: 0x2403000e  addiu       $v1, $zero, 0xE
    ctx->pc = 0x35e5c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x35e5cc: 0x8fa2007c  lw          $v0, 0x7C($sp)
    ctx->pc = 0x35e5ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
    // 0x35e5d0: 0xfc430008  sd          $v1, 0x8($v0)
    ctx->pc = 0x35e5d0u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 8), GPR_U64(ctx, 3));
    // 0x35e5d4: 0x8fa2007c  lw          $v0, 0x7C($sp)
    ctx->pc = 0x35e5d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
    // 0x35e5d8: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x35e5d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x35e5dc: 0xafa2007c  sw          $v0, 0x7C($sp)
    ctx->pc = 0x35e5dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 2));
    // 0x35e5e0: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x35e5e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x35e5e4: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x35e5e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x35e5e8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x35e5e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x35e5ec: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x35e5ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x35e5f0: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x35e5f0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x35e5f4: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x35e5f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x35e5f8: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x35e5f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x35e5fc: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x35e5fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x35e600: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x35e600u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x35e604: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x35e604u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x35e608: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x35e608u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x35e60c: 0x8fa2007c  lw          $v0, 0x7C($sp)
    ctx->pc = 0x35e60cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
    // 0x35e610: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x35e610u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x35e614: 0x24030051  addiu       $v1, $zero, 0x51
    ctx->pc = 0x35e614u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 81));
    // 0x35e618: 0x8fa2007c  lw          $v0, 0x7C($sp)
    ctx->pc = 0x35e618u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
    // 0x35e61c: 0xfc430008  sd          $v1, 0x8($v0)
    ctx->pc = 0x35e61cu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 8), GPR_U64(ctx, 3));
    // 0x35e620: 0x8fa2007c  lw          $v0, 0x7C($sp)
    ctx->pc = 0x35e620u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
    // 0x35e624: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x35e624u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x35e628: 0xafa2007c  sw          $v0, 0x7C($sp)
    ctx->pc = 0x35e628u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 2));
    // 0x35e62c: 0x8fa2007c  lw          $v0, 0x7C($sp)
    ctx->pc = 0x35e62cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
    // 0x35e630: 0xfc400000  sd          $zero, 0x0($v0)
    ctx->pc = 0x35e630u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 0));
    // 0x35e634: 0x24030053  addiu       $v1, $zero, 0x53
    ctx->pc = 0x35e634u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 83));
    // 0x35e638: 0x8fa2007c  lw          $v0, 0x7C($sp)
    ctx->pc = 0x35e638u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
    // 0x35e63c: 0xfc430008  sd          $v1, 0x8($v0)
    ctx->pc = 0x35e63cu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 8), GPR_U64(ctx, 3));
    // 0x35e640: 0x8fa2007c  lw          $v0, 0x7C($sp)
    ctx->pc = 0x35e640u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
    // 0x35e644: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x35e644u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x35e648: 0xafa2007c  sw          $v0, 0x7C($sp)
    ctx->pc = 0x35e648u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 2));
    // 0x35e64c: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x35e64cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x35e650: 0x511818  mult        $v1, $v0, $s1
    ctx->pc = 0x35e650u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x35e654: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x35e654u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x35e658: 0x31103  sra         $v0, $v1, 4
    ctx->pc = 0x35e658u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 4));
    // 0x35e65c: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x35e65cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x35e660: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x35e660u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x35e664: 0x14103c  dsll32      $v0, $s4, 0
    ctx->pc = 0x35e664u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) << (32 + 0));
    // 0x35e668: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x35e668u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x35e66c: 0x213f8  dsll        $v0, $v0, 15
    ctx->pc = 0x35e66cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 15);
    // 0x35e670: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x35e670u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x35e674: 0x3c020800  lui         $v0, 0x800
    ctx->pc = 0x35e674u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2048 << 16));
    // 0x35e678: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x35e678u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x35e67c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x35e67cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x35e680: 0x8fa2007c  lw          $v0, 0x7C($sp)
    ctx->pc = 0x35e680u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
    // 0x35e684: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x35e684u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x35e688: 0x8fa2007c  lw          $v0, 0x7C($sp)
    ctx->pc = 0x35e688u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
    // 0x35e68c: 0xfc400008  sd          $zero, 0x8($v0)
    ctx->pc = 0x35e68cu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 8), GPR_U64(ctx, 0));
    // 0x35e690: 0x8fa2007c  lw          $v0, 0x7C($sp)
    ctx->pc = 0x35e690u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
    // 0x35e694: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x35e694u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x35e698: 0xafa2007c  sw          $v0, 0x7C($sp)
    ctx->pc = 0x35e698u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 2));
    // 0x35e69c: 0x27a4007c  addiu       $a0, $sp, 0x7C
    ctx->pc = 0x35e69cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 124));
    // 0x35e6a0: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x35e6a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x35e6a4: 0x511818  mult        $v1, $v0, $s1
    ctx->pc = 0x35e6a4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x35e6a8: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x35e6a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x35e6ac: 0x32903  sra         $a1, $v1, 4
    ctx->pc = 0x35e6acu;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 3), 4));
    // 0x35e6b0: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x35e6b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x35e6b4: 0x2313c  dsll32      $a2, $v0, 4
    ctx->pc = 0x35e6b4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << (32 + 4));
    // 0x35e6b8: 0x6313e  dsrl32      $a2, $a2, 4
    ctx->pc = 0x35e6b8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> (32 + 4));
    // 0x35e6bc: 0xc040a86  jal         func_102A18
    ctx->pc = 0x35E6BCu;
    SET_GPR_U32(ctx, 31, 0x35E6C4u);
    ctx->pc = 0x102A18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102A18u, 0x35E6BCu, 0x35E6C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35E6C4u;
label_35e6c4:
    // 0x35e6c4: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x35e6c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x35e6c8: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x35e6c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x35e6cc: 0x511018  mult        $v0, $v0, $s1
    ctx->pc = 0x35e6ccu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x35e6d0: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x35e6d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x35e6d4: 0xafa20088  sw          $v0, 0x88($sp)
    ctx->pc = 0x35e6d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 136), GPR_U32(ctx, 2));
    // 0x35e6d8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x35e6d8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x35e6dc: 0x0  nop
    ctx->pc = 0x35e6dcu;
    // NOP
    ctx->pc = 0x35e6e0u;
}

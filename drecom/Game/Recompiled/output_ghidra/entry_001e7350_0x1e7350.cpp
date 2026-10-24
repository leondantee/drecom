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

// Function: entry_001e7350
// Address: 0x1e7350 - 0x1e73c0
void entry_001e7350_0x1e7350(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e7350_0x1e7350");
#endif

    ctx->pc = 0x1e7350u;

    // 0x1e7350: 0x8fa501c0  lw          $a1, 0x1C0($sp)
    ctx->pc = 0x1e7350u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 448)));
    // 0x1e7354: 0x8fa401e0  lw          $a0, 0x1E0($sp)
    ctx->pc = 0x1e7354u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
    // 0x1e7358: 0xa41023  subu        $v0, $a1, $a0
    ctx->pc = 0x1e7358u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x1e735c: 0x7040a628  paddub      $s4, $v0, $zero
    ctx->pc = 0x1e735cu;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1e7360: 0x8fa501c4  lw          $a1, 0x1C4($sp)
    ctx->pc = 0x1e7360u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 452)));
    // 0x1e7364: 0x8fa201e4  lw          $v0, 0x1E4($sp)
    ctx->pc = 0x1e7364u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 484)));
    // 0x1e7368: 0xa2a823  subu        $s5, $a1, $v0
    ctx->pc = 0x1e7368u;
    SET_GPR_S32(ctx, 21, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x1e736c: 0x8fa50210  lw          $a1, 0x210($sp)
    ctx->pc = 0x1e736cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 528)));
    // 0x1e7370: 0x8fa401e0  lw          $a0, 0x1E0($sp)
    ctx->pc = 0x1e7370u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
    // 0x1e7374: 0xa41023  subu        $v0, $a1, $a0
    ctx->pc = 0x1e7374u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x1e7378: 0x7040b628  paddub      $s6, $v0, $zero
    ctx->pc = 0x1e7378u;
    SET_GPR_VEC(ctx, 22, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1e737c: 0x8fa50214  lw          $a1, 0x214($sp)
    ctx->pc = 0x1e737cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 532)));
    // 0x1e7380: 0x8fa601e4  lw          $a2, 0x1E4($sp)
    ctx->pc = 0x1e7380u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 484)));
    // 0x1e7384: 0xa63023  subu        $a2, $a1, $a2
    ctx->pc = 0x1e7384u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x1e7388: 0x70c0be28  paddub      $s7, $a2, $zero
    ctx->pc = 0x1e7388u;
    SET_GPR_VEC(ctx, 23, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x1e738c: 0x2b61018  mult        $v0, $s5, $s6
    ctx->pc = 0x1e738cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 21) * (int64_t)GPR_S32(ctx, 22); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1e7390: 0x2972818  mult        $a1, $s4, $s7
    ctx->pc = 0x1e7390u;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 23); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x1e7394: 0x453023  subu        $a2, $v0, $a1
    ctx->pc = 0x1e7394u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1e7398: 0x70c0a628  paddub      $s4, $a2, $zero
    ctx->pc = 0x1e7398u;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x1e739c: 0x6810008  bgez        $s4, . + 4 + (0x8 << 2)
    ctx->pc = 0x1E739Cu;
    {
        const bool branch_taken_0x1e739c = (GPR_S32(ctx, 20) >= 0);
        if (branch_taken_0x1e739c) {
            ctx->pc = 0x1E73C0u;
            return;
        }
    }
    ctx->pc = 0x1E73A4u;
    // 0x1e73a4: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x1e73a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1e73a8: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1e73a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1e73ac: 0x240400a1  addiu       $a0, $zero, 0xA1
    ctx->pc = 0x1e73acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 161));
    // 0x1e73b0: 0x822825  or          $a1, $a0, $v0
    ctx->pc = 0x1e73b0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x1e73b4: 0xfe050000  sd          $a1, 0x0($s0)
    ctx->pc = 0x1e73b4u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 5));
    // 0x1e73b8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1E73B8u;
    {
        const bool branch_taken_0x1e73b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e73b8) {
            ctx->pc = 0x1E73D8u;
            return;
        }
    }
    ctx->pc = 0x1E73C0u;
}

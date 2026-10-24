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

// Function: entry_0021460c
// Address: 0x21460c - 0x214654
void entry_0021460c_0x21460c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0021460c_0x21460c");
#endif

    ctx->pc = 0x21460cu;

    // 0x21460c: 0x82430001  lb          $v1, 0x1($s2)
    ctx->pc = 0x21460cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 1)));
    // 0x214610: 0x2465ffd0  addiu       $a1, $v1, -0x30
    ctx->pc = 0x214610u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967248));
    // 0x214614: 0x30a200ff  andi        $v0, $a1, 0xFF
    ctx->pc = 0x214614u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x214618: 0x2c42000a  sltiu       $v0, $v0, 0xA
    ctx->pc = 0x214618u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x21461c: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x21461Cu;
    {
        const bool branch_taken_0x21461c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x214620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21461Cu;
        // 0x214620: 0x82460002  lb          $a2, 0x2($s2) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21461c) {
            ctx->pc = 0x214694u;
            return;
        }
    }
    ctx->pc = 0x214624u;
    // 0x214624: 0x24c2ffd0  addiu       $v0, $a2, -0x30
    ctx->pc = 0x214624u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967248));
    // 0x214628: 0x2c42000a  sltiu       $v0, $v0, 0xA
    ctx->pc = 0x214628u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x21462c: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x21462Cu;
    {
        const bool branch_taken_0x21462c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x214630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21462Cu;
        // 0x214630: 0x2403000a  addiu       $v1, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21462c) {
            ctx->pc = 0x214654u;
            return;
        }
    }
    ctx->pc = 0x214634u;
    // 0x214634: 0x2404001f  addiu       $a0, $zero, 0x1F
    ctx->pc = 0x214634u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x214638: 0xa31818  mult        $v1, $a1, $v1
    ctx->pc = 0x214638u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x21463c: 0x26500002  addiu       $s0, $s2, 0x2
    ctx->pc = 0x21463cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 2));
    // 0x214640: 0x2463ffd0  addiu       $v1, $v1, -0x30
    ctx->pc = 0x214640u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967248));
    // 0x214644: 0x662821  addu        $a1, $v1, $a2
    ctx->pc = 0x214644u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x214648: 0x28a20020  slti        $v0, $a1, 0x20
    ctx->pc = 0x214648u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x21464c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x21464Cu;
    {
        const bool branch_taken_0x21464c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x214650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21464Cu;
        // 0x214650: 0x82280a  movz        $a1, $a0, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21464c) {
            ctx->pc = 0x214658u;
            return;
        }
    }
    ctx->pc = 0x214654u;
}

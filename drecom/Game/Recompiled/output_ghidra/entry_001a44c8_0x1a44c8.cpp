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

// Function: entry_001a44c8
// Address: 0x1a44c8 - 0x1a4548
void entry_001a44c8_0x1a44c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a44c8_0x1a44c8");
#endif

    ctx->pc = 0x1a44c8u;

    // 0x1a44c8: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1a44c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1a44cc: 0x8c6302fc  lw          $v1, 0x2FC($v1)
    ctx->pc = 0x1a44ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 764)));
    // 0x1a44d0: 0x3182a  slt         $v1, $zero, $v1
    ctx->pc = 0x1a44d0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1a44d4: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x1a44d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1a44d8: 0x8c8602fc  lw          $a2, 0x2FC($a0)
    ctx->pc = 0x1a44d8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 764)));
    // 0x1a44dc: 0xc31818  mult        $v1, $a2, $v1
    ctx->pc = 0x1a44dcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1a44e0: 0xac8302fc  sw          $v1, 0x2FC($a0)
    ctx->pc = 0x1a44e0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 764), GPR_U32(ctx, 3));
    // 0x1a44e4: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x1a44e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1a44e8: 0x8c830300  lw          $v1, 0x300($a0)
    ctx->pc = 0x1a44e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 768)));
    // 0x1a44ec: 0x3282a  slt         $a1, $zero, $v1
    ctx->pc = 0x1a44ecu;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1a44f0: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x1a44f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1a44f4: 0x8c830300  lw          $v1, 0x300($a0)
    ctx->pc = 0x1a44f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 768)));
    // 0x1a44f8: 0x651818  mult        $v1, $v1, $a1
    ctx->pc = 0x1a44f8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1a44fc: 0xac830300  sw          $v1, 0x300($a0)
    ctx->pc = 0x1a44fcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 768), GPR_U32(ctx, 3));
    // 0x1a4500: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1a4500u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1a4504: 0x90630311  lbu         $v1, 0x311($v1)
    ctx->pc = 0x1a4504u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 785)));
    // 0x1a4508: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1a4508u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1a450c: 0x32200  sll         $a0, $v1, 8
    ctx->pc = 0x1a450cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x1a4510: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x1a4510u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1a4514: 0x428c3  sra         $a1, $a0, 3
    ctx->pc = 0x1a4514u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 4), 3));
    // 0x1a4518: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x1a4518u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1a451c: 0x8c8302fc  lw          $v1, 0x2FC($a0)
    ctx->pc = 0x1a451cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 764)));
    // 0x1a4520: 0x652821  addu        $a1, $v1, $a1
    ctx->pc = 0x1a4520u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1a4524: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x1a4524u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1a4528: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x1a4528u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1a452c: 0xa3082b  sltu        $at, $a1, $v1
    ctx->pc = 0x1a452cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1a4530: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A4530u;
    {
        const bool branch_taken_0x1a4530 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a4530) {
            ctx->pc = 0x1A4548u;
            return;
        }
    }
    ctx->pc = 0x1A4538u;
    // 0x1a4538: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1a4538u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1a453c: 0x8c7202fc  lw          $s2, 0x2FC($v1)
    ctx->pc = 0x1a453cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 764)));
    // 0x1a4540: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1A4540u;
    {
        const bool branch_taken_0x1a4540 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a4540) {
            ctx->pc = 0x1A4570u;
            return;
        }
    }
    ctx->pc = 0x1A4548u;
}

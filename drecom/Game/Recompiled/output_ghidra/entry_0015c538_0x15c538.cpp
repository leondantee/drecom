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

// Function: entry_0015c538
// Address: 0x15c538 - 0x15c580
void entry_0015c538_0x15c538(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015c538_0x15c538");
#endif

    ctx->pc = 0x15c538u;

    // 0x15c538: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x15c538u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x15c53c: 0x90421560  lbu         $v0, 0x1560($v0)
    ctx->pc = 0x15c53cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 5472)));
    // 0x15c540: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x15c540u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x15c544: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x15c544u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x15c548: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x15c548u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x15c54c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x15c54cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x15c550: 0x24421420  addiu       $v0, $v0, 0x1420
    ctx->pc = 0x15c550u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5152));
    // 0x15c554: 0x78440000  lq          $a0, 0x0($v0)
    ctx->pc = 0x15c554u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x15c558: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x15c558u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x15c55c: 0x90421561  lbu         $v0, 0x1561($v0)
    ctx->pc = 0x15c55cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 5473)));
    // 0x15c560: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x15c560u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x15c564: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x15c564u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x15c568: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x15c568u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x15c56c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x15c56cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x15c570: 0x24421420  addiu       $v0, $v0, 0x1420
    ctx->pc = 0x15c570u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5152));
    // 0x15c574: 0x7c440000  sq          $a0, 0x0($v0)
    ctx->pc = 0x15c574u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 4));
    // 0x15c578: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x15C578u;
    {
        const bool branch_taken_0x15c578 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15c578) {
            ctx->pc = 0x15C5BCu;
            return;
        }
    }
    ctx->pc = 0x15C580u;
}

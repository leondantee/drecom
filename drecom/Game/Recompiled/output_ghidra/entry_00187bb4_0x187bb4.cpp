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

// Function: entry_00187bb4
// Address: 0x187bb4 - 0x187c28
void entry_00187bb4_0x187bb4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00187bb4_0x187bb4");
#endif

    ctx->pc = 0x187bb4u;

    // 0x187bb4: 0x101100  sll         $v0, $s0, 4
    ctx->pc = 0x187bb4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x187bb8: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x187bb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x187bbc: 0x21940  sll         $v1, $v0, 5
    ctx->pc = 0x187bbcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x187bc0: 0x3c02004a  lui         $v0, 0x4A
    ctx->pc = 0x187bc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)74 << 16));
    // 0x187bc4: 0x24421380  addiu       $v0, $v0, 0x1380
    ctx->pc = 0x187bc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4992));
    // 0x187bc8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x187bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x187bcc: 0x8c420158  lw          $v0, 0x158($v0)
    ctx->pc = 0x187bccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 344)));
    // 0x187bd0: 0x304207ff  andi        $v0, $v0, 0x7FF
    ctx->pc = 0x187bd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2047);
    // 0x187bd4: 0x1040002c  beqz        $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x187BD4u;
    {
        const bool branch_taken_0x187bd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x187bd4) {
            ctx->pc = 0x187C88u;
            return;
        }
    }
    ctx->pc = 0x187BDCu;
    // 0x187bdc: 0x101100  sll         $v0, $s0, 4
    ctx->pc = 0x187bdcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x187be0: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x187be0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x187be4: 0x21940  sll         $v1, $v0, 5
    ctx->pc = 0x187be4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x187be8: 0x3c02004a  lui         $v0, 0x4A
    ctx->pc = 0x187be8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)74 << 16));
    // 0x187bec: 0x24421380  addiu       $v0, $v0, 0x1380
    ctx->pc = 0x187becu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4992));
    // 0x187bf0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x187bf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x187bf4: 0x8c420164  lw          $v0, 0x164($v0)
    ctx->pc = 0x187bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 356)));
    // 0x187bf8: 0x30510f00  andi        $s1, $v0, 0xF00
    ctx->pc = 0x187bf8u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3840);
    // 0x187bfc: 0x12200012  beqz        $s1, . + 4 + (0x12 << 2)
    ctx->pc = 0x187BFCu;
    {
        const bool branch_taken_0x187bfc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x187bfc) {
            ctx->pc = 0x187C48u;
            return;
        }
    }
    ctx->pc = 0x187C04u;
    // 0x187c04: 0x32220100  andi        $v0, $s1, 0x100
    ctx->pc = 0x187c04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)256);
    // 0x187c08: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x187C08u;
    {
        const bool branch_taken_0x187c08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x187c08) {
            ctx->pc = 0x187C28u;
            return;
        }
    }
    ctx->pc = 0x187C10u;
    // 0x187c10: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x187c10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x187c14: 0x8c221a98  lw          $v0, 0x1A98($at)
    ctx->pc = 0x187c14u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x187c18: 0x30422000  andi        $v0, $v0, 0x2000
    ctx->pc = 0x187c18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8192);
    // 0x187c1c: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x187C1Cu;
    {
        const bool branch_taken_0x187c1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x187c1c) {
            ctx->pc = 0x187C48u;
            return;
        }
    }
    ctx->pc = 0x187C24u;
    // 0x187c24: 0x0  nop
    ctx->pc = 0x187c24u;
    // NOP
    ctx->pc = 0x187c28u;
}

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

// Function: entry_0018c13c
// Address: 0x18c13c - 0x18c16c
void entry_0018c13c_0x18c13c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018c13c_0x18c13c");
#endif

    ctx->pc = 0x18c13cu;

    // 0x18c13c: 0x9202013c  lbu         $v0, 0x13C($s0)
    ctx->pc = 0x18c13cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 316)));
    // 0x18c140: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x18c140u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x18c144: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x18C144u;
    {
        const bool branch_taken_0x18c144 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18c144) {
            ctx->pc = 0x18C178u;
            return;
        }
    }
    ctx->pc = 0x18C14Cu;
    // 0x18c14c: 0x324200ff  andi        $v0, $s2, 0xFF
    ctx->pc = 0x18c14cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
    // 0x18c150: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x18C150u;
    {
        const bool branch_taken_0x18c150 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18c150) {
            ctx->pc = 0x18C16Cu;
            return;
        }
    }
    ctx->pc = 0x18C158u;
    // 0x18c158: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x18c158u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x18c15c: 0xae020120  sw          $v0, 0x120($s0)
    ctx->pc = 0x18c15cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 288), GPR_U32(ctx, 2));
    // 0x18c160: 0x72001628  paddub      $v0, $s0, $zero
    ctx->pc = 0x18c160u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x18c164: 0x1000003f  b           . + 4 + (0x3F << 2)
    ctx->pc = 0x18C164u;
    {
        const bool branch_taken_0x18c164 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18c164) {
            ctx->pc = 0x18C264u;
            return;
        }
    }
    ctx->pc = 0x18C16Cu;
}

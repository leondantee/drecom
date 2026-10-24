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

// Function: entry_002119f4
// Address: 0x2119f4 - 0x211a2c
void entry_002119f4_0x2119f4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002119f4_0x2119f4");
#endif

    ctx->pc = 0x2119f4u;

    // 0x2119f4: 0x960410a4  lhu         $a0, 0x10A4($s0)
    ctx->pc = 0x2119f4u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4260)));
    // 0x2119f8: 0x3083ffff  andi        $v1, $a0, 0xFFFF
    ctx->pc = 0x2119f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x2119fc: 0x24660001  addiu       $a2, $v1, 0x1
    ctx->pc = 0x2119fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x211a00: 0x960310a4  lhu         $v1, 0x10A4($s0)
    ctx->pc = 0x211a00u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4260)));
    // 0x211a04: 0x3069ffff  andi        $t1, $v1, 0xFFFF
    ctx->pc = 0x211a04u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x211a08: 0x95080  sll         $t2, $t1, 2
    ctx->pc = 0x211a08u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
    // 0x211a0c: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x211a0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
    // 0x211a10: 0x24659500  addiu       $a1, $v1, -0x6B00
    ctx->pc = 0x211a10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294939904));
    // 0x211a14: 0xaa1821  addu        $v1, $a1, $t2
    ctx->pc = 0x211a14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 10)));
    // 0x211a18: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x211a18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x211a1c: 0x863021  addu        $a2, $a0, $a2
    ctx->pc = 0x211a1cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x211a20: 0xac660000  sw          $a2, 0x0($v1)
    ctx->pc = 0x211a20u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 6));
    // 0x211a24: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x211A24u;
    {
        const bool branch_taken_0x211a24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x211a24) {
            ctx->pc = 0x211AA0u;
            return;
        }
    }
    ctx->pc = 0x211A2Cu;
}

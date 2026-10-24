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

// Function: entry_001a861c
// Address: 0x1a861c - 0x1a867c
void entry_001a861c_0x1a861c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a861c_0x1a861c");
#endif

    ctx->pc = 0x1a861cu;

    // 0x1a861c: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1a861cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1a8620: 0x22100  sll         $a0, $v0, 4
    ctx->pc = 0x1a8620u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1a8624: 0x82020310  lb          $v0, 0x310($s0)
    ctx->pc = 0x1a8624u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 784)));
    // 0x1a8628: 0x21e3c  dsll32      $v1, $v0, 24
    ctx->pc = 0x1a8628u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 24));
    // 0x1a862c: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x1a862cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x1a8630: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1a8630u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1a8634: 0x31043  sra         $v0, $v1, 1
    ctx->pc = 0x1a8634u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 1));
    // 0x1a8638: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x1a8638u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x1a863c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1a863cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1a8640: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x1a8640u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x1a8644: 0x821825  or          $v1, $a0, $v0
    ctx->pc = 0x1a8644u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x1a8648: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x1a8648u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x1a864c: 0x24423ca4  addiu       $v0, $v0, 0x3CA4
    ctx->pc = 0x1a864cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15524));
    // 0x1a8650: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1a8650u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5D3CA4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D3CA4u, _value); } while (0);
    // 0x1a8654: 0x82020310  lb          $v0, 0x310($s0)
    ctx->pc = 0x1a8654u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 784)));
    // 0x1a8658: 0x21e3c  dsll32      $v1, $v0, 24
    ctx->pc = 0x1a8658u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 24));
    // 0x1a865c: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x1a865cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x1a8660: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1a8660u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1a8664: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x1a8664u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x1a8668: 0x4610004  bgez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A8668u;
    {
        const bool branch_taken_0x1a8668 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x1a8668) {
            ctx->pc = 0x1A867Cu;
            return;
        }
    }
    ctx->pc = 0x1A8670u;
    // 0x1a8670: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1A8670u;
    {
        const bool branch_taken_0x1a8670 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a8670) {
            ctx->pc = 0x1A867Cu;
            return;
        }
    }
    ctx->pc = 0x1A8678u;
    // 0x1a8678: 0x2442fffe  addiu       $v0, $v0, -0x2
    ctx->pc = 0x1a8678u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967294));
    ctx->pc = 0x1a867cu;
}

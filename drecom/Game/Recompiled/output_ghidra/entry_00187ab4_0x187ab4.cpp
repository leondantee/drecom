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

// Function: entry_00187ab4
// Address: 0x187ab4 - 0x187b0c
void entry_00187ab4_0x187ab4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00187ab4_0x187ab4");
#endif

    ctx->pc = 0x187ab4u;

    // 0x187ab4: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x187ab4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x187ab8: 0x8423f138  lh          $v1, -0xEC8($at)
    ctx->pc = 0x187ab8u;
    SET_GPR_S32(ctx, 3, (int16_t)FAST_READ16(0x47F138u));
    // 0x187abc: 0x38c3c  dsll32      $s1, $v1, 16
    ctx->pc = 0x187abcu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 3) << (32 + 16));
    // 0x187ac0: 0x118c3f  dsra32      $s1, $s1, 16
    ctx->pc = 0x187ac0u;
    SET_GPR_S64(ctx, 17, GPR_S64(ctx, 17) >> (32 + 16));
    // 0x187ac4: 0x111900  sll         $v1, $s1, 4
    ctx->pc = 0x187ac4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x187ac8: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x187ac8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x187acc: 0x38140  sll         $s0, $v1, 5
    ctx->pc = 0x187accu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x187ad0: 0x3c03004a  lui         $v1, 0x4A
    ctx->pc = 0x187ad0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)74 << 16));
    // 0x187ad4: 0x24631380  addiu       $v1, $v1, 0x1380
    ctx->pc = 0x187ad4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4992));
    // 0x187ad8: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x187ad8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x187adc: 0x8c640158  lw          $a0, 0x158($v1)
    ctx->pc = 0x187adcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 344)));
    // 0x187ae0: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x187ae0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x187ae4: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x187ae4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x187ae8: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x187AE8u;
    {
        const bool branch_taken_0x187ae8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x187ae8) {
            ctx->pc = 0x187B0Cu;
            return;
        }
    }
    ctx->pc = 0x187AF0u;
    // 0x187af0: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x187af0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x187af4: 0x8c240360  lw          $a0, 0x360($at)
    ctx->pc = 0x187af4u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x480360u));
    // 0x187af8: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x187af8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x187afc: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x187afcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x187b00: 0xac230360  sw          $v1, 0x360($at)
    ctx->pc = 0x187b00u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x480360u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x480360u, _value); } while (0);
    // 0x187b04: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x187B04u;
    {
        const bool branch_taken_0x187b04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x187b04) {
            ctx->pc = 0x187B2Cu;
            return;
        }
    }
    ctx->pc = 0x187B0Cu;
}

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

// Function: entry_0018ddcc
// Address: 0x18ddcc - 0x18de38
void entry_0018ddcc_0x18ddcc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018ddcc_0x18ddcc");
#endif

    switch (ctx->pc) {
        case 0x18de20u: goto label_18de20;
        default: break;
    }

    ctx->pc = 0x18ddccu;

    // 0x18ddcc: 0x2402000f  addiu       $v0, $zero, 0xF
    ctx->pc = 0x18ddccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x18ddd0: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x18ddd0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x18ddd4: 0xdfa20078  ld          $v0, 0x78($sp)
    ctx->pc = 0x18ddd4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x18ddd8: 0x2143a  dsrl        $v0, $v0, 16
    ctx->pc = 0x18ddd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 16);
    // 0x18dddc: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x18dddcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x18dde0: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x18dde0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x18dde4: 0xa60200e0  sh          $v0, 0xE0($s0)
    ctx->pc = 0x18dde4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 224), (uint16_t)GPR_U32(ctx, 2));
    // 0x18dde8: 0xdfa20078  ld          $v0, 0x78($sp)
    ctx->pc = 0x18dde8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x18ddec: 0x2183e  dsrl32      $v1, $v0, 0
    ctx->pc = 0x18ddecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x18ddf0: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x18ddf0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x18ddf4: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x18ddf4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x18ddf8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x18ddf8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x18ddfc: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x18ddfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x18de00: 0x2a03c  dsll32      $s4, $v0, 0
    ctx->pc = 0x18de00u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 2) << (32 + 0));
    // 0x18de04: 0x14a03f  dsra32      $s4, $s4, 0
    ctx->pc = 0x18de04u;
    SET_GPR_S64(ctx, 20, GPR_S64(ctx, 20) >> (32 + 0));
    // 0x18de08: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x18de08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x18de0c: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x18DE0Cu;
    {
        const bool branch_taken_0x18de0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18de0c) {
            ctx->pc = 0x18DE38u;
            return;
        }
    }
    ctx->pc = 0x18DE14u;
    // 0x18de14: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x18de14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x18de18: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x18DE18u;
    SET_GPR_U32(ctx, 31, 0x18DE20u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x18DE18u, 0x18DE20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18DE20u;
label_18de20:
    // 0x18de20: 0x27a20060  addiu       $v0, $sp, 0x60
    ctx->pc = 0x18de20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x18de24: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x18de24u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x18de28: 0x260200a0  addiu       $v0, $s0, 0xA0
    ctx->pc = 0x18de28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
    // 0x18de2c: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x18de2cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x18de30: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x18DE30u;
    {
        const bool branch_taken_0x18de30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18de30) {
            ctx->pc = 0x18DE64u;
            return;
        }
    }
    ctx->pc = 0x18DE38u;
}

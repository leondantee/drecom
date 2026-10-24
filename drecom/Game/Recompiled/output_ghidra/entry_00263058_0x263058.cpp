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

// Function: entry_00263058
// Address: 0x263058 - 0x26309c
void entry_00263058_0x263058(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00263058_0x263058");
#endif

    ctx->pc = 0x263058u;

    // 0x263058: 0x46005032  c.eq.s      $f10, $f0
    ctx->pc = 0x263058u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[10], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26305c: 0x0  nop
    ctx->pc = 0x26305cu;
    // NOP
    // 0x263060: 0x4500000e  bc1f        . + 4 + (0xE << 2)
    ctx->pc = 0x263060u;
    {
        const bool branch_taken_0x263060 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x263060) {
            ctx->pc = 0x26309Cu;
            return;
        }
    }
    ctx->pc = 0x263068u;
    // 0x263068: 0x34040  sll         $t0, $v1, 1
    ctx->pc = 0x263068u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x26306c: 0x1034021  addu        $t0, $t0, $v1
    ctx->pc = 0x26306cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x263070: 0x84080  sll         $t0, $t0, 2
    ctx->pc = 0x263070u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x263074: 0x1a84021  addu        $t0, $t5, $t0
    ctx->pc = 0x263074u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 8)));
    // 0x263078: 0xc5010000  lwc1        $f1, 0x0($t0)
    ctx->pc = 0x263078u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26307c: 0x3068ffff  andi        $t0, $v1, 0xFFFF
    ctx->pc = 0x26307cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x263080: 0x71840  sll         $v1, $a3, 1
    ctx->pc = 0x263080u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
    // 0x263084: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x263084u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x263088: 0xa4680000  sh          $t0, 0x0($v1)
    ctx->pc = 0x263088u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 8));
    // 0x26308c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x26308cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x263090: 0x306b00ff  andi        $t3, $v1, 0xFF
    ctx->pc = 0x263090u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x263094: 0x1000008e  b           . + 4 + (0x8E << 2)
    ctx->pc = 0x263094u;
    {
        const bool branch_taken_0x263094 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x263094) {
            ctx->pc = 0x2632D0u;
            return;
        }
    }
    ctx->pc = 0x26309Cu;
}

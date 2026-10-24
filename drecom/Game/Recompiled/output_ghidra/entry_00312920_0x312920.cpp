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

// Function: entry_00312920
// Address: 0x312920 - 0x31299c
void entry_00312920_0x312920(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00312920_0x312920");
#endif

    ctx->pc = 0x312920u;

    // 0x312920: 0x24020038  addiu       $v0, $zero, 0x38
    ctx->pc = 0x312920u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    // 0x312924: 0x1622001d  bne         $s1, $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x312924u;
    {
        const bool branch_taken_0x312924 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x312924) {
            ctx->pc = 0x31299Cu;
            return;
        }
    }
    ctx->pc = 0x31292Cu;
    // 0x31292c: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x31292cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x312930: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x312930u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x312934: 0x14620019  bne         $v1, $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x312934u;
    {
        const bool branch_taken_0x312934 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x312934) {
            ctx->pc = 0x31299Cu;
            return;
        }
    }
    ctx->pc = 0x31293Cu;
    // 0x31293c: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x31293cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x312940: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x312940u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x312944: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x312944u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x312948: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x312948u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x31294c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x31294cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x312950: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x312950u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x312954: 0x22200  sll         $a0, $v0, 8
    ctx->pc = 0x312954u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x312958: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x312958u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x31295c: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x31295cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x312960: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x312960u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x312964: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x312964u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x312968: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x312968u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x31296c: 0x3042ff00  andi        $v0, $v0, 0xFF00
    ctx->pc = 0x31296cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65280);
    // 0x312970: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x312970u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x312974: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x312974u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x312978: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x312978u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x31297c: 0xac227508  sw          $v0, 0x7508($at)
    ctx->pc = 0x31297cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x312980: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x312980u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x312984: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x312984u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x312988: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x312988u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x31298c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x31298cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x312990: 0xa202013a  sb          $v0, 0x13A($s0)
    ctx->pc = 0x312990u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 314), (uint8_t)GPR_U32(ctx, 2));
    // 0x312994: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x312994u;
    {
        const bool branch_taken_0x312994 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x312994) {
            ctx->pc = 0x3129F0u;
            return;
        }
    }
    ctx->pc = 0x31299Cu;
}

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

// Function: entry_00313328
// Address: 0x313328 - 0x313398
void entry_00313328_0x313328(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00313328_0x313328");
#endif

    ctx->pc = 0x313328u;

    // 0x313328: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x313328u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x31332c: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x31332cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x313330: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x313330u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x313334: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x313334u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x313338: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x313338u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x31333c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x31333cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x313340: 0x22200  sll         $a0, $v0, 8
    ctx->pc = 0x313340u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x313344: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x313344u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x313348: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x313348u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x31334c: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x31334cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x313350: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x313350u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x313354: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x313354u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x313358: 0x3042ff00  andi        $v0, $v0, 0xFF00
    ctx->pc = 0x313358u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65280);
    // 0x31335c: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x31335cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x313360: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x313360u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x313364: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x313364u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x313368: 0xac227508  sw          $v0, 0x7508($at)
    ctx->pc = 0x313368u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x31336c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x31336cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x313370: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x313370u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x313374: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x313374u;
    {
        const bool branch_taken_0x313374 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x313374) {
            ctx->pc = 0x313398u;
            return;
        }
    }
    ctx->pc = 0x31337Cu;
    // 0x31337c: 0x24100007  addiu       $s0, $zero, 0x7
    ctx->pc = 0x31337cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x313380: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x313380u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x313384: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x313384u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x313388: 0x0  nop
    ctx->pc = 0x313388u;
    // NOP
    // 0x31338c: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x31338cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x313390: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x313390u;
    {
        const bool branch_taken_0x313390 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x313390) {
            ctx->pc = 0x3133ACu;
            return;
        }
    }
    ctx->pc = 0x313398u;
}

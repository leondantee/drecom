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

// Function: entry_0033d684
// Address: 0x33d684 - 0x33d6fc
void entry_0033d684_0x33d684(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0033d684_0x33d684");
#endif

    ctx->pc = 0x33d684u;

    // 0x33d684: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x33d684u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x33d688: 0x8c42128c  lw          $v0, 0x128C($v0)
    ctx->pc = 0x33d688u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4748)));
    // 0x33d68c: 0x2c410031  sltiu       $at, $v0, 0x31
    ctx->pc = 0x33d68cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)49) ? 1 : 0);
    // 0x33d690: 0x1420007e  bnez        $at, . + 4 + (0x7E << 2)
    ctx->pc = 0x33D690u;
    {
        const bool branch_taken_0x33d690 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x33d690) {
            ctx->pc = 0x33D88Cu;
            return;
        }
    }
    ctx->pc = 0x33D698u;
    // 0x33d698: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x33d698u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x33d69c: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x33d69cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x33d6a0: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x33d6a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x33d6a4: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x33d6a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x33d6a8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x33d6a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x33d6ac: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x33d6acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x33d6b0: 0x22200  sll         $a0, $v0, 8
    ctx->pc = 0x33d6b0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x33d6b4: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x33d6b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x33d6b8: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x33d6b8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x33d6bc: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x33d6bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x33d6c0: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x33d6c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x33d6c4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x33d6c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x33d6c8: 0x3042ff00  andi        $v0, $v0, 0xFF00
    ctx->pc = 0x33d6c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65280);
    // 0x33d6cc: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x33d6ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x33d6d0: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x33d6d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x33d6d4: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x33d6d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x33d6d8: 0xac227508  sw          $v0, 0x7508($at)
    ctx->pc = 0x33d6d8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x33d6dc: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x33d6dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x33d6e0: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x33D6E0u;
    {
        const bool branch_taken_0x33d6e0 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x33d6e0) {
            ctx->pc = 0x33D6FCu;
            return;
        }
    }
    ctx->pc = 0x33D6E8u;
    // 0x33d6e8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x33d6e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x33d6ec: 0x0  nop
    ctx->pc = 0x33d6ecu;
    // NOP
    // 0x33d6f0: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x33d6f0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x33d6f4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x33D6F4u;
    {
        const bool branch_taken_0x33d6f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33d6f4) {
            ctx->pc = 0x33D718u;
            return;
        }
    }
    ctx->pc = 0x33D6FCu;
}

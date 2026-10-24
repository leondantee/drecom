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

// Function: entry_00276044
// Address: 0x276044 - 0x2760e0
void entry_00276044_0x276044(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00276044_0x276044");
#endif

    ctx->pc = 0x276044u;

    // 0x276044: 0x3c044000  lui         $a0, 0x4000
    ctx->pc = 0x276044u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16384 << 16));
    // 0x276048: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x276048u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27604c: 0x0  nop
    ctx->pc = 0x27604cu;
    // NOP
    // 0x276050: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x276050u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x276054: 0xc7a000c4  lwc1        $f0, 0xC4($sp)
    ctx->pc = 0x276054u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x276058: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x276058u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x27605c: 0x113240  sll         $a2, $s1, 9
    ctx->pc = 0x27605cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 17), 9));
    // 0x276060: 0x2461021  addu        $v0, $s2, $a2
    ctx->pc = 0x276060u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 6)));
    // 0x276064: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x276064u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x276068: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x276068u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x27606c: 0xe4400038  swc1        $f0, 0x38($v0)
    ctx->pc = 0x27606cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 56), bits); }
    // 0x276070: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x276070u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x276074: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x276074u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x276078: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x276078u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x27607c: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x27607cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x276080: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x276080u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x276084: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x276084u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x276088: 0x22200  sll         $a0, $v0, 8
    ctx->pc = 0x276088u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x27608c: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x27608cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x276090: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x276090u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x276094: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x276094u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x276098: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x276098u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x27609c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x27609cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2760a0: 0x3042ff00  andi        $v0, $v0, 0xFF00
    ctx->pc = 0x2760a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65280);
    // 0x2760a4: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x2760a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x2760a8: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x2760a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2760ac: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2760acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2760b0: 0xac227508  sw          $v0, 0x7508($at)
    ctx->pc = 0x2760b0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x2760b4: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x2760b4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2760b8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2760b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2760bc: 0x30830001  andi        $v1, $a0, 0x1
    ctx->pc = 0x2760bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x2760c0: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x2760C0u;
    {
        const bool branch_taken_0x2760c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2760c0) {
            ctx->pc = 0x2760E0u;
            return;
        }
    }
    ctx->pc = 0x2760C8u;
    // 0x2760c8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2760c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2760cc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2760ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2760d0: 0x0  nop
    ctx->pc = 0x2760d0u;
    // NOP
    // 0x2760d4: 0xe7a000c8  swc1        $f0, 0xC8($sp)
    ctx->pc = 0x2760d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
    // 0x2760d8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2760D8u;
    {
        const bool branch_taken_0x2760d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2760d8) {
            ctx->pc = 0x2760F0u;
            return;
        }
    }
    ctx->pc = 0x2760E0u;
}

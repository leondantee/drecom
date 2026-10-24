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

// Function: entry_002762a8
// Address: 0x2762a8 - 0x276350
void entry_002762a8_0x2762a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002762a8_0x2762a8");
#endif

    switch (ctx->pc) {
        case 0x2762ccu: goto label_2762cc;
        default: break;
    }

    ctx->pc = 0x2762a8u;

    // 0x2762a8: 0xc7a000cc  lwc1        $f0, 0xCC($sp)
    ctx->pc = 0x2762a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2762ac: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2762acu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2762b0: 0x3c023a03  lui         $v0, 0x3A03
    ctx->pc = 0x2762b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14851 << 16));
    // 0x2762b4: 0x3453126f  ori         $s3, $v0, 0x126F
    ctx->pc = 0x2762b4u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4719);
    // 0x2762b8: 0x44930000  mtc1        $s3, $f0
    ctx->pc = 0x2762b8u;
    { uint32_t bits = GPR_U32(ctx, 19); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2762bc: 0x0  nop
    ctx->pc = 0x2762bcu;
    // NOP
    // 0x2762c0: 0x46010302  mul.s       $f12, $f0, $f1
    ctx->pc = 0x2762c0u;
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2762c4: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x2762C4u;
    SET_GPR_U32(ctx, 31, 0x2762CCu);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x2762C4u, 0x2762CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2762CCu;
label_2762cc:
    // 0x2762cc: 0x111240  sll         $v0, $s1, 9
    ctx->pc = 0x2762ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 9));
    // 0x2762d0: 0x2421821  addu        $v1, $s2, $v0
    ctx->pc = 0x2762d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x2762d4: 0x101100  sll         $v0, $s0, 4
    ctx->pc = 0x2762d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x2762d8: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x2762d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2762dc: 0xe4400c34  swc1        $f0, 0xC34($v0)
    ctx->pc = 0x2762dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 3124), bits); }
    // 0x2762e0: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2762e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2762e4: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x2762e4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x2762e8: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x2762e8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2762ec: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2762ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2762f0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2762f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2762f4: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x2762f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2762f8: 0x22200  sll         $a0, $v0, 8
    ctx->pc = 0x2762f8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x2762fc: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2762fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x276300: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x276300u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x276304: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x276304u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x276308: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x276308u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x27630c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x27630cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x276310: 0x3042ff00  andi        $v0, $v0, 0xFF00
    ctx->pc = 0x276310u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65280);
    // 0x276314: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x276314u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x276318: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x276318u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x27631c: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x27631cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x276320: 0xac227508  sw          $v0, 0x7508($at)
    ctx->pc = 0x276320u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x276324: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x276324u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x276328: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x276328u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x27632c: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x27632cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x276330: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x276330u;
    {
        const bool branch_taken_0x276330 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x276330) {
            ctx->pc = 0x276350u;
            return;
        }
    }
    ctx->pc = 0x276338u;
    // 0x276338: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x276338u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x27633c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x27633cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x276340: 0x0  nop
    ctx->pc = 0x276340u;
    // NOP
    // 0x276344: 0xe7a000d0  swc1        $f0, 0xD0($sp)
    ctx->pc = 0x276344u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x276348: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x276348u;
    {
        const bool branch_taken_0x276348 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x276348) {
            ctx->pc = 0x276360u;
            return;
        }
    }
    ctx->pc = 0x276350u;
}

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

// Function: entry_00276228
// Address: 0x276228 - 0x27628c
void entry_00276228_0x276228(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00276228_0x276228");
#endif

    ctx->pc = 0x276228u;

    // 0x276228: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x276228u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x27622c: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x27622cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x276230: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x276230u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x276234: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x276234u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x276238: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x276238u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x27623c: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x27623cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x276240: 0x32200  sll         $a0, $v1, 8
    ctx->pc = 0x276240u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x276244: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x276244u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x276248: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x276248u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x27624c: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x27624cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x276250: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x276250u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x276254: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x276254u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x276258: 0x3042ff00  andi        $v0, $v0, 0xFF00
    ctx->pc = 0x276258u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65280);
    // 0x27625c: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x27625cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x276260: 0x82b821  addu        $s7, $a0, $v0
    ctx->pc = 0x276260u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x276264: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x276264u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x276268: 0xac377508  sw          $s7, 0x7508($at)
    ctx->pc = 0x276268u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 23)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x27626c: 0x32e200ff  andi        $v0, $s7, 0xFF
    ctx->pc = 0x27626cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)255);
    // 0x276270: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x276270u;
    {
        const bool branch_taken_0x276270 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x276270) {
            ctx->pc = 0x27628Cu;
            return;
        }
    }
    ctx->pc = 0x276278u;
    // 0x276278: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x276278u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27627c: 0x0  nop
    ctx->pc = 0x27627cu;
    // NOP
    // 0x276280: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x276280u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x276284: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x276284u;
    {
        const bool branch_taken_0x276284 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x276284) {
            ctx->pc = 0x2762A8u;
            return;
        }
    }
    ctx->pc = 0x27628Cu;
}

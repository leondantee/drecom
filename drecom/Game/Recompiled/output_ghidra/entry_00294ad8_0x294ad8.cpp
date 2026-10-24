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

// Function: entry_00294ad8
// Address: 0x294ad8 - 0x294b60
void entry_00294ad8_0x294ad8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00294ad8_0x294ad8");
#endif

    ctx->pc = 0x294ad8u;

    // 0x294ad8: 0x3c034380  lui         $v1, 0x4380
    ctx->pc = 0x294ad8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17280 << 16));
    // 0x294adc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x294adcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x294ae0: 0x0  nop
    ctx->pc = 0x294ae0u;
    // NOP
    // 0x294ae4: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x294ae4u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x294ae8: 0x44930000  mtc1        $s3, $f0
    ctx->pc = 0x294ae8u;
    { uint32_t bits = GPR_U32(ctx, 19); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x294aec: 0x0  nop
    ctx->pc = 0x294aecu;
    // NOP
    // 0x294af0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x294af0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x294af4: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x294af4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x294af8: 0xe7a00098  swc1        $f0, 0x98($sp)
    ctx->pc = 0x294af8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x294afc: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x294afcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x294b00: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x294b00u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x294b04: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x294b04u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x294b08: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x294b08u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x294b0c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x294b0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x294b10: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x294b10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x294b14: 0x32a00  sll         $a1, $v1, 8
    ctx->pc = 0x294b14u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x294b18: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x294b18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x294b1c: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x294b1cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x294b20: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x294b20u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x294b24: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x294b24u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x294b28: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x294b28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x294b2c: 0x3063ff00  andi        $v1, $v1, 0xFF00
    ctx->pc = 0x294b2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65280);
    // 0x294b30: 0x31a02  srl         $v1, $v1, 8
    ctx->pc = 0x294b30u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x294b34: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x294b34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x294b38: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x294b38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x294b3c: 0xac237508  sw          $v1, 0x7508($at)
    ctx->pc = 0x294b3cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x294b40: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x294b40u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x294b44: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x294b44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x294b48: 0x30830001  andi        $v1, $a0, 0x1
    ctx->pc = 0x294b48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x294b4c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x294B4Cu;
    {
        const bool branch_taken_0x294b4c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x294b4c) {
            ctx->pc = 0x294B60u;
            return;
        }
    }
    ctx->pc = 0x294B54u;
    // 0x294b54: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x294b54u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x294b58: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x294B58u;
    {
        const bool branch_taken_0x294b58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x294b58) {
            ctx->pc = 0x294B68u;
            return;
        }
    }
    ctx->pc = 0x294B60u;
}

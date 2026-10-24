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

// Function: entry_001dc97c
// Address: 0x1dc97c - 0x1dca4c
void entry_001dc97c_0x1dc97c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001dc97c_0x1dc97c");
#endif

    switch (ctx->pc) {
        case 0x1dc9d4u: goto label_1dc9d4;
        default: break;
    }

    ctx->pc = 0x1dc97cu;

label_1dc97c:
    // 0x1dc97c: 0x3262ffff  andi        $v0, $s3, 0xFFFF
    ctx->pc = 0x1dc97cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)65535);
    // 0x1dc980: 0xae22006c  sw          $v0, 0x6C($s1)
    ctx->pc = 0x1dc980u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 108), GPR_U32(ctx, 2));
    // 0x1dc984: 0x26310090  addiu       $s1, $s1, 0x90
    ctx->pc = 0x1dc984u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 144));
    // 0x1dc988: 0x26940010  addiu       $s4, $s4, 0x10
    ctx->pc = 0x1dc988u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
    // 0x1dc98c: 0x295102b  sltu        $v0, $s4, $s5
    ctx->pc = 0x1dc98cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 21)) ? 1 : 0);
    // 0x1dc990: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1DC990u;
    {
        const bool branch_taken_0x1dc990 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1dc990) {
            ctx->pc = 0x1DC97Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1dc97c;
        }
    }
    ctx->pc = 0x1DC998u;
    // 0x1dc998: 0x2402003f  addiu       $v0, $zero, 0x3F
    ctx->pc = 0x1dc998u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x1dc99c: 0x2943c  dsll32      $s2, $v0, 16
    ctx->pc = 0x1dc99cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1dc9a0: 0x12943f  dsra32      $s2, $s2, 16
    ctx->pc = 0x1dc9a0u;
    SET_GPR_S64(ctx, 18, GPR_S64(ctx, 18) >> (32 + 16));
    // 0x1dc9a4: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x1dc9a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x1dc9a8: 0x2442c930  addiu       $v0, $v0, -0x36D0
    ctx->pc = 0x1dc9a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953264));
    // 0x1dc9ac: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x1dc9acu;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x47C930u));
    // 0x1dc9b0: 0x27a200b0  addiu       $v0, $sp, 0xB0
    ctx->pc = 0x1dc9b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x1dc9b4: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x1dc9b4u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x1dc9b8: 0x8fa200f8  lw          $v0, 0xF8($sp)
    ctx->pc = 0x1dc9b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x1dc9bc: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x1dc9bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x1dc9c0: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x1dc9c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x1dc9c4: 0x24450030  addiu       $a1, $v0, 0x30
    ctx->pc = 0x1dc9c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x1dc9c8: 0x27a600b0  addiu       $a2, $sp, 0xB0
    ctx->pc = 0x1dc9c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x1dc9cc: 0xc040c80  jal         func_103200
    ctx->pc = 0x1DC9CCu;
    SET_GPR_U32(ctx, 31, 0x1DC9D4u);
    ctx->pc = 0x103200u;
    {
        ctx->pc = 0x1DC9D4u;
        ps2_stubs::sceVu0SubVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1DC9D4u) { return; }
    ctx->pc = 0x1DC9D4u;
label_1dc9d4:
    // 0x1dc9d4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1dc9d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1dc9d8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1dc9d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1dc9dc: 0x0  nop
    ctx->pc = 0x1dc9dcu;
    // NOP
    // 0x1dc9e0: 0xe7a000bc  swc1        $f0, 0xBC($sp)
    ctx->pc = 0x1dc9e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 188), bits); }
    // 0x1dc9e4: 0x121c3c  dsll32      $v1, $s2, 16
    ctx->pc = 0x1dc9e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) << (32 + 16));
    // 0x1dc9e8: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x1dc9e8u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x1dc9ec: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x1dc9ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1dc9f0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1dc9f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1dc9f4: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x1dc9f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1dc9f8: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x1dc9f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x1dc9fc: 0x2442bd00  addiu       $v0, $v0, -0x4300
    ctx->pc = 0x1dc9fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950144));
    // 0x1dca00: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1dca00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1dca04: 0x24420070  addiu       $v0, $v0, 0x70
    ctx->pc = 0x1dca04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
    // 0x1dca08: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x1dca08u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1dca0c: 0x27a200a0  addiu       $v0, $sp, 0xA0
    ctx->pc = 0x1dca0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1dca10: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x1dca10u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x1dca14: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1dca14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1dca18: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1dca18u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1dca1c: 0x0  nop
    ctx->pc = 0x1dca1cu;
    // NOP
    // 0x1dca20: 0xe7a000ac  swc1        $f0, 0xAC($sp)
    ctx->pc = 0x1dca20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 172), bits); }
    // 0x1dca24: 0x24020037  addiu       $v0, $zero, 0x37
    ctx->pc = 0x1dca24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
    // 0x1dca28: 0x2943c  dsll32      $s2, $v0, 16
    ctx->pc = 0x1dca28u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1dca2c: 0x12943f  dsra32      $s2, $s2, 16
    ctx->pc = 0x1dca2cu;
    SET_GPR_S64(ctx, 18, GPR_S64(ctx, 18) >> (32 + 16));
    // 0x1dca30: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1dca30u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1dca34: 0x0  nop
    ctx->pc = 0x1dca34u;
    // NOP
    // 0x1dca38: 0xe7a000e4  swc1        $f0, 0xE4($sp)
    ctx->pc = 0x1dca38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 228), bits); }
    // 0x1dca3c: 0x24020037  addiu       $v0, $zero, 0x37
    ctx->pc = 0x1dca3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
    // 0x1dca40: 0x3050ffff  andi        $s0, $v0, 0xFFFF
    ctx->pc = 0x1dca40u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1dca44: 0x10000036  b           . + 4 + (0x36 << 2)
    ctx->pc = 0x1DCA44u;
    {
        const bool branch_taken_0x1dca44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dca44) {
            ctx->pc = 0x1DCB20u;
            return;
        }
    }
    ctx->pc = 0x1DCA4Cu;
}

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

// Function: entry_00211f28
// Address: 0x211f28 - 0x211fb0
void entry_00211f28_0x211f28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00211f28_0x211f28");
#endif

    ctx->pc = 0x211f28u;

    // 0x211f28: 0x9203008d  lbu         $v1, 0x8D($s0)
    ctx->pc = 0x211f28u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 141)));
    // 0x211f2c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x211f2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x211f30: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x211f30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x211f34: 0x1060003c  beqz        $v1, . + 4 + (0x3C << 2)
    ctx->pc = 0x211F34u;
    {
        const bool branch_taken_0x211f34 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x211f34) {
            ctx->pc = 0x212028u;
            return;
        }
    }
    ctx->pc = 0x211F3Cu;
    // 0x211f3c: 0xc6000090  lwc1        $f0, 0x90($s0)
    ctx->pc = 0x211f3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x211f40: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x211f40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x211f44: 0xc6000094  lwc1        $f0, 0x94($s0)
    ctx->pc = 0x211f44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x211f48: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x211f48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x211f4c: 0xc6000098  lwc1        $f0, 0x98($s0)
    ctx->pc = 0x211f4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x211f50: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x211f50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x211f54: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x211f54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x211f58: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x211f58u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x211f5c: 0x0  nop
    ctx->pc = 0x211f5cu;
    // NOP
    // 0x211f60: 0xe7a0004c  swc1        $f0, 0x4C($sp)
    ctx->pc = 0x211f60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x211f64: 0x9202008c  lbu         $v0, 0x8C($s0)
    ctx->pc = 0x211f64u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 140)));
    // 0x211f68: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x211f68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x211f6c: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x211f6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x211f70: 0x1062000f  beq         $v1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x211F70u;
    {
        const bool branch_taken_0x211f70 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x211f70) {
            ctx->pc = 0x211FB0u;
            return;
        }
    }
    ctx->pc = 0x211F78u;
    // 0x211f78: 0x9202008c  lbu         $v0, 0x8C($s0)
    ctx->pc = 0x211f78u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 140)));
    // 0x211f7c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x211f7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x211f80: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x211f80u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x211f84: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x211f84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x211f88: 0x2442e650  addiu       $v0, $v0, -0x19B0
    ctx->pc = 0x211f88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960720));
    // 0x211f8c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x211f8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x211f90: 0x8c511390  lw          $s1, 0x1390($v0)
    ctx->pc = 0x211f90u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5008)));
    // 0x211f94: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x211f94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x211f98: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x211f98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x211f9c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x211F9Cu;
    {
        const bool branch_taken_0x211f9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x211f9c) {
            ctx->pc = 0x211FB8u;
            return;
        }
    }
    ctx->pc = 0x211FA4u;
    // 0x211fa4: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x211fa4u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x211fa8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x211FA8u;
    {
        const bool branch_taken_0x211fa8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x211fa8) {
            ctx->pc = 0x211FB8u;
            return;
        }
    }
    ctx->pc = 0x211FB0u;
}

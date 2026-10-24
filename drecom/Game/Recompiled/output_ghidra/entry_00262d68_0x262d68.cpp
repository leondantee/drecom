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

// Function: entry_00262d68
// Address: 0x262d68 - 0x262dec
void entry_00262d68_0x262d68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00262d68_0x262d68");
#endif

    ctx->pc = 0x262d68u;

    // 0x262d68: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x262d68u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x262d6c: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x262d6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x262d70: 0x94630050  lhu         $v1, 0x50($v1)
    ctx->pc = 0x262d70u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
    // 0x262d74: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x262d74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x262d78: 0x223182b  sltu        $v1, $s1, $v1
    ctx->pc = 0x262d78u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x262d7c: 0x1460ff16  bnez        $v1, . + 4 + (-0xEA << 2)
    ctx->pc = 0x262D7Cu;
    {
        const bool branch_taken_0x262d7c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x262d7c) {
            ctx->pc = 0x2629D8u;
            return;
        }
    }
    ctx->pc = 0x262D84u;
    // 0x262d84: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x262d84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x262d88: 0x906309e6  lbu         $v1, 0x9E6($v1)
    ctx->pc = 0x262d88u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2534)));
    // 0x262d8c: 0x10600026  beqz        $v1, . + 4 + (0x26 << 2)
    ctx->pc = 0x262D8Cu;
    {
        const bool branch_taken_0x262d8c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x262d8c) {
            ctx->pc = 0x262E28u;
            return;
        }
    }
    ctx->pc = 0x262D94u;
    // 0x262d94: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x262d94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x262d98: 0x946309e0  lhu         $v1, 0x9E0($v1)
    ctx->pc = 0x262d98u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 2528)));
    // 0x262d9c: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x262d9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x262da0: 0x30630020  andi        $v1, $v1, 0x20
    ctx->pc = 0x262da0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
    // 0x262da4: 0x14600011  bnez        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x262DA4u;
    {
        const bool branch_taken_0x262da4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x262da4) {
            ctx->pc = 0x262DECu;
            return;
        }
    }
    ctx->pc = 0x262DACu;
    // 0x262dac: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x262dacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x262db0: 0xc46109cc  lwc1        $f1, 0x9CC($v1)
    ctx->pc = 0x262db0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 2508)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x262db4: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x262db4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x262db8: 0xc46009c8  lwc1        $f0, 0x9C8($v1)
    ctx->pc = 0x262db8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 2504)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x262dbc: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x262dbcu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x262dc0: 0xc7a000c8  lwc1        $f0, 0xC8($sp)
    ctx->pc = 0x262dc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x262dc4: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x262dc4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x262dc8: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x262dc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x262dcc: 0xc46009c8  lwc1        $f0, 0x9C8($v1)
    ctx->pc = 0x262dccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 2504)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x262dd0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x262dd0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x262dd4: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x262dd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x262dd8: 0xe46009cc  swc1        $f0, 0x9CC($v1)
    ctx->pc = 0x262dd8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 2508), bits); }
    // 0x262ddc: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x262ddcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x262de0: 0xc46009cc  lwc1        $f0, 0x9CC($v1)
    ctx->pc = 0x262de0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 2508)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x262de4: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x262de4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x262de8: 0xe46009c8  swc1        $f0, 0x9C8($v1)
    ctx->pc = 0x262de8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 2504), bits); }
    ctx->pc = 0x262decu;
}

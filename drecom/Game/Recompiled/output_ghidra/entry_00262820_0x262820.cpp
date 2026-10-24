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

// Function: entry_00262820
// Address: 0x262820 - 0x2628a4
void entry_00262820_0x262820(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00262820_0x262820");
#endif

    ctx->pc = 0x262820u;

    // 0x262820: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x262820u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x262824: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x262824u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x262828: 0x94630050  lhu         $v1, 0x50($v1)
    ctx->pc = 0x262828u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
    // 0x26282c: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x26282cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x262830: 0x223182b  sltu        $v1, $s1, $v1
    ctx->pc = 0x262830u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x262834: 0x1460ff8c  bnez        $v1, . + 4 + (-0x74 << 2)
    ctx->pc = 0x262834u;
    {
        const bool branch_taken_0x262834 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x262834) {
            ctx->pc = 0x262668u;
            return;
        }
    }
    ctx->pc = 0x26283Cu;
    // 0x26283c: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x26283cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x262840: 0x906309e6  lbu         $v1, 0x9E6($v1)
    ctx->pc = 0x262840u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2534)));
    // 0x262844: 0x10600026  beqz        $v1, . + 4 + (0x26 << 2)
    ctx->pc = 0x262844u;
    {
        const bool branch_taken_0x262844 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x262844) {
            ctx->pc = 0x2628E0u;
            return;
        }
    }
    ctx->pc = 0x26284Cu;
    // 0x26284c: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x26284cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x262850: 0x946309e0  lhu         $v1, 0x9E0($v1)
    ctx->pc = 0x262850u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 2528)));
    // 0x262854: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x262854u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x262858: 0x30630020  andi        $v1, $v1, 0x20
    ctx->pc = 0x262858u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
    // 0x26285c: 0x14600011  bnez        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x26285Cu;
    {
        const bool branch_taken_0x26285c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x26285c) {
            ctx->pc = 0x2628A4u;
            return;
        }
    }
    ctx->pc = 0x262864u;
    // 0x262864: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x262864u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x262868: 0xc46109cc  lwc1        $f1, 0x9CC($v1)
    ctx->pc = 0x262868u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 2508)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26286c: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x26286cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x262870: 0xc46009c8  lwc1        $f0, 0x9C8($v1)
    ctx->pc = 0x262870u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 2504)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x262874: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x262874u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x262878: 0xc7a000a8  lwc1        $f0, 0xA8($sp)
    ctx->pc = 0x262878u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26287c: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x26287cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x262880: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x262880u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x262884: 0xc46009c8  lwc1        $f0, 0x9C8($v1)
    ctx->pc = 0x262884u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 2504)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x262888: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x262888u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x26288c: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x26288cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x262890: 0xe46009cc  swc1        $f0, 0x9CC($v1)
    ctx->pc = 0x262890u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 2508), bits); }
    // 0x262894: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x262894u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x262898: 0xc46009cc  lwc1        $f0, 0x9CC($v1)
    ctx->pc = 0x262898u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 2508)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26289c: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x26289cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x2628a0: 0xe46009c8  swc1        $f0, 0x9C8($v1)
    ctx->pc = 0x2628a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 2504), bits); }
    ctx->pc = 0x2628a4u;
}

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

// Function: entry_0025f3f0
// Address: 0x25f3f0 - 0x25f494
void entry_0025f3f0_0x25f3f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0025f3f0_0x25f3f0");
#endif

    ctx->pc = 0x25f3f0u;

    // 0x25f3f0: 0x96030140  lhu         $v1, 0x140($s0)
    ctx->pc = 0x25f3f0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 320)));
    // 0x25f3f4: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x25f3f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x25f3f8: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x25f3f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x25f3fc: 0x106000ae  beqz        $v1, . + 4 + (0xAE << 2)
    ctx->pc = 0x25F3FCu;
    {
        const bool branch_taken_0x25f3fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x25f3fc) {
            ctx->pc = 0x25F6B8u;
            return;
        }
    }
    ctx->pc = 0x25F404u;
    // 0x25f404: 0x96020140  lhu         $v0, 0x140($s0)
    ctx->pc = 0x25f404u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 320)));
    // 0x25f408: 0x3042f7ff  andi        $v0, $v0, 0xF7FF
    ctx->pc = 0x25f408u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)63487);
    // 0x25f40c: 0xa6020140  sh          $v0, 0x140($s0)
    ctx->pc = 0x25f40cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 320), (uint16_t)GPR_U32(ctx, 2));
    // 0x25f410: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x25f410u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x25f414: 0x121980  sll         $v1, $s2, 6
    ctx->pc = 0x25f414u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 6));
    // 0x25f418: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x25f418u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x25f41c: 0x439821  addu        $s3, $v0, $v1
    ctx->pc = 0x25f41cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x25f420: 0x92020143  lbu         $v0, 0x143($s0)
    ctx->pc = 0x25f420u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 323)));
    // 0x25f424: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x25f424u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x25f428: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x25f428u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x25f42c: 0x10620042  beq         $v1, $v0, . + 4 + (0x42 << 2)
    ctx->pc = 0x25F42Cu;
    {
        const bool branch_taken_0x25f42c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x25f42c) {
            ctx->pc = 0x25F538u;
            return;
        }
    }
    ctx->pc = 0x25F434u;
    // 0x25f434: 0x96220140  lhu         $v0, 0x140($s1)
    ctx->pc = 0x25f434u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 320)));
    // 0x25f438: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x25f438u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x25f43c: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x25f43cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x25f440: 0x10400035  beqz        $v0, . + 4 + (0x35 << 2)
    ctx->pc = 0x25F440u;
    {
        const bool branch_taken_0x25f440 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x25f440) {
            ctx->pc = 0x25F518u;
            return;
        }
    }
    ctx->pc = 0x25F448u;
    // 0x25f448: 0x96220140  lhu         $v0, 0x140($s1)
    ctx->pc = 0x25f448u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 320)));
    // 0x25f44c: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x25f44cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x25f450: 0x30420400  andi        $v0, $v0, 0x400
    ctx->pc = 0x25f450u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1024);
    // 0x25f454: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x25F454u;
    {
        const bool branch_taken_0x25f454 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x25f454) {
            ctx->pc = 0x25F494u;
            return;
        }
    }
    ctx->pc = 0x25F45Cu;
    // 0x25f45c: 0xc6210134  lwc1        $f1, 0x134($s1)
    ctx->pc = 0x25f45cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x25f460: 0xc6000134  lwc1        $f0, 0x134($s0)
    ctx->pc = 0x25f460u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25f464: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x25f464u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x25f468: 0xe6000134  swc1        $f0, 0x134($s0)
    ctx->pc = 0x25f468u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 308), bits); }
    // 0x25f46c: 0xc6210138  lwc1        $f1, 0x138($s1)
    ctx->pc = 0x25f46cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x25f470: 0xc6000138  lwc1        $f0, 0x138($s0)
    ctx->pc = 0x25f470u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25f474: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x25f474u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x25f478: 0xe6000138  swc1        $f0, 0x138($s0)
    ctx->pc = 0x25f478u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 312), bits); }
    // 0x25f47c: 0xc621013c  lwc1        $f1, 0x13C($s1)
    ctx->pc = 0x25f47cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 316)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x25f480: 0xc600013c  lwc1        $f0, 0x13C($s0)
    ctx->pc = 0x25f480u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 316)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25f484: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x25f484u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x25f488: 0xe600013c  swc1        $f0, 0x13C($s0)
    ctx->pc = 0x25f488u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 316), bits); }
    // 0x25f48c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x25F48Cu;
    {
        const bool branch_taken_0x25f48c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25f48c) {
            ctx->pc = 0x25F4B8u;
            return;
        }
    }
    ctx->pc = 0x25F494u;
}

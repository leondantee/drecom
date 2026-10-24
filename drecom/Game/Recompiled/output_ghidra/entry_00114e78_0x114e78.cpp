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

// Function: entry_00114e78
// Address: 0x114e78 - 0x114f14
void entry_00114e78_0x114e78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00114e78_0x114e78");
#endif

    ctx->pc = 0x114e78u;

    // 0x114e78: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x114e78u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x114e7c: 0x2462d8e0  addiu       $v0, $v1, -0x2720
    ctx->pc = 0x114e7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294957280));
    // 0x114e80: 0xc469d8e0  lwc1        $f9, -0x2720($v1)
    ctx->pc = 0x114e80u;
    { uint32_t bits = FAST_READ32(0x3AD8E0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x114e84: 0xc4430028  lwc1        $f3, 0x28($v0)
    ctx->pc = 0x114e84u;
    { uint32_t bits = FAST_READ32(0x3AD908u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x114e88: 0x460a5002  mul.s       $f0, $f10, $f10
    ctx->pc = 0x114e88u;
    ctx->f[0] = FPU_MUL_S(ctx->f[10], ctx->f[10]);
    // 0x114e8c: 0xc4450020  lwc1        $f5, 0x20($v0)
    ctx->pc = 0x114e8cu;
    { uint32_t bits = FAST_READ32(0x3AD900u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x114e90: 0xc4440024  lwc1        $f4, 0x24($v0)
    ctx->pc = 0x114e90u;
    { uint32_t bits = FAST_READ32(0x3AD904u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x114e94: 0xc441001c  lwc1        $f1, 0x1C($v0)
    ctx->pc = 0x114e94u;
    { uint32_t bits = FAST_READ32(0x3AD8FCu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x114e98: 0x460300c2  mul.s       $f3, $f0, $f3
    ctx->pc = 0x114e98u;
    ctx->f[3] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x114e9c: 0xc4460018  lwc1        $f6, 0x18($v0)
    ctx->pc = 0x114e9cu;
    { uint32_t bits = FAST_READ32(0x3AD8F8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x114ea0: 0x46040102  mul.s       $f4, $f0, $f4
    ctx->pc = 0x114ea0u;
    ctx->f[4] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x114ea4: 0xc4420014  lwc1        $f2, 0x14($v0)
    ctx->pc = 0x114ea4u;
    { uint32_t bits = FAST_READ32(0x3AD8F4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x114ea8: 0xc4470010  lwc1        $f7, 0x10($v0)
    ctx->pc = 0x114ea8u;
    { uint32_t bits = FAST_READ32(0x3AD8F0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x114eac: 0x46032940  add.s       $f5, $f5, $f3
    ctx->pc = 0x114eacu;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[3]);
    // 0x114eb0: 0xc4480008  lwc1        $f8, 0x8($v0)
    ctx->pc = 0x114eb0u;
    { uint32_t bits = FAST_READ32(0x3AD8E8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x114eb4: 0x46040840  add.s       $f1, $f1, $f4
    ctx->pc = 0x114eb4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[4]);
    // 0x114eb8: 0xc443000c  lwc1        $f3, 0xC($v0)
    ctx->pc = 0x114eb8u;
    { uint32_t bits = FAST_READ32(0x3AD8ECu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x114ebc: 0xc4440004  lwc1        $f4, 0x4($v0)
    ctx->pc = 0x114ebcu;
    { uint32_t bits = FAST_READ32(0x3AD8E4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x114ec0: 0x46050142  mul.s       $f5, $f0, $f5
    ctx->pc = 0x114ec0u;
    ctx->f[5] = FPU_MUL_S(ctx->f[0], ctx->f[5]);
    // 0x114ec4: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x114ec4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x114ec8: 0x46053180  add.s       $f6, $f6, $f5
    ctx->pc = 0x114ec8u;
    ctx->f[6] = FPU_ADD_S(ctx->f[6], ctx->f[5]);
    // 0x114ecc: 0x46011080  add.s       $f2, $f2, $f1
    ctx->pc = 0x114eccu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x114ed0: 0x46060182  mul.s       $f6, $f0, $f6
    ctx->pc = 0x114ed0u;
    ctx->f[6] = FPU_MUL_S(ctx->f[0], ctx->f[6]);
    // 0x114ed4: 0x46020082  mul.s       $f2, $f0, $f2
    ctx->pc = 0x114ed4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x114ed8: 0x460639c0  add.s       $f7, $f7, $f6
    ctx->pc = 0x114ed8u;
    ctx->f[7] = FPU_ADD_S(ctx->f[7], ctx->f[6]);
    // 0x114edc: 0x460218c0  add.s       $f3, $f3, $f2
    ctx->pc = 0x114edcu;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
    // 0x114ee0: 0x460701c2  mul.s       $f7, $f0, $f7
    ctx->pc = 0x114ee0u;
    ctx->f[7] = FPU_MUL_S(ctx->f[0], ctx->f[7]);
    // 0x114ee4: 0x460300c2  mul.s       $f3, $f0, $f3
    ctx->pc = 0x114ee4u;
    ctx->f[3] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x114ee8: 0x46074200  add.s       $f8, $f8, $f7
    ctx->pc = 0x114ee8u;
    ctx->f[8] = FPU_ADD_S(ctx->f[8], ctx->f[7]);
    // 0x114eec: 0x46032100  add.s       $f4, $f4, $f3
    ctx->pc = 0x114eecu;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[3]);
    // 0x114ef0: 0x46080202  mul.s       $f8, $f0, $f8
    ctx->pc = 0x114ef0u;
    ctx->f[8] = FPU_MUL_S(ctx->f[0], ctx->f[8]);
    // 0x114ef4: 0x46040042  mul.s       $f1, $f0, $f4
    ctx->pc = 0x114ef4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x114ef8: 0x46084a40  add.s       $f9, $f9, $f8
    ctx->pc = 0x114ef8u;
    ctx->f[9] = FPU_ADD_S(ctx->f[9], ctx->f[8]);
    // 0x114efc: 0x4810005  bgez        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x114EFCu;
    {
        const bool branch_taken_0x114efc = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x114F00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114EFCu;
        // 0x114f00: 0x46095002  mul.s       $f0, $f10, $f9 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[10], ctx->f[9]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x114efc) {
            ctx->pc = 0x114F14u;
            return;
        }
    }
    ctx->pc = 0x114F04u;
    // 0x114f04: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x114f04u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x114f08: 0x46006002  mul.s       $f0, $f12, $f0
    ctx->pc = 0x114f08u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x114f0c: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x114F0Cu;
    {
        const bool branch_taken_0x114f0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x114F10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114F0Cu;
        // 0x114f10: 0x46006001  sub.s       $f0, $f12, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x114f0c) {
            ctx->pc = 0x114F54u;
            return;
        }
    }
    ctx->pc = 0x114F14u;
}

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

// Function: entry_00114578
// Address: 0x114578 - 0x1145f8
void entry_00114578_0x114578(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00114578_0x114578");
#endif

    ctx->pc = 0x114578u;

    // 0x114578: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x114578u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11457c: 0x1082001e  beq         $a0, $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x11457Cu;
    {
        const bool branch_taken_0x11457c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x114580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11457Cu;
        // 0x114580: 0x46005806  mov.s       $f0, $f11 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[11]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11457c) {
            ctx->pc = 0x1145F8u;
            return;
        }
    }
    ctx->pc = 0x114584u;
    // 0x114584: 0x44025800  mfc1        $v0, $f11
    ctx->pc = 0x114584u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[11], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x114588: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x114588u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11458c: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x11458cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x114590: 0x3442f000  ori         $v0, $v0, 0xF000
    ctx->pc = 0x114590u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)61440);
    // 0x114594: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x114594u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x114598: 0x44837000  mtc1        $v1, $f14
    ctx->pc = 0x114598u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x11459c: 0x460c7041  sub.s       $f1, $f14, $f12
    ctx->pc = 0x11459cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[14], ctx->f[12]);
    // 0x1145a0: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x1145a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x1145a4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1145a4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1145a8: 0x0  nop
    ctx->pc = 0x1145a8u;
    // NOP
    // 0x1145ac: 0x0  nop
    ctx->pc = 0x1145acu;
    // NOP
    // 0x1145b0: 0x460b0003  div.s       $f0, $f0, $f11
    ctx->pc = 0x1145b0u;
    { if (ctx->f[11] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[11]); }
    // 0x1145b4: 0x46011901  sub.s       $f4, $f3, $f1
    ctx->pc = 0x1145b4u;
    ctx->f[4] = FPU_SUB_S(ctx->f[3], ctx->f[1]);
    // 0x1145b8: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x1145b8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x1145bc: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x1145bcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1145c0: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x1145c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1145c4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1145c4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1145c8: 0x460e0042  mul.s       $f1, $f0, $f14
    ctx->pc = 0x1145c8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[14]);
    // 0x1145cc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1145ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1145d0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1145d0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1145d4: 0x46000bc0  add.s       $f15, $f1, $f0
    ctx->pc = 0x1145d4u;
    ctx->f[15] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1145d8: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1145d8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1145dc: 0x46040802  mul.s       $f0, $f1, $f4
    ctx->pc = 0x1145dcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
    // 0x1145e0: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x1145e0u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1145e4: 0x46007800  add.s       $f0, $f15, $f0
    ctx->pc = 0x1145e4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[15], ctx->f[0]);
    // 0x1145e8: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1145e8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1145ec: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1145ecu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1145f0: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1145f0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1145f4: 0x0  nop
    ctx->pc = 0x1145f4u;
    // NOP
    ctx->pc = 0x1145f8u;
}

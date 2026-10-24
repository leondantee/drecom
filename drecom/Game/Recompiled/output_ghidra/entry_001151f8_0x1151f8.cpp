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

// Function: entry_001151f8
// Address: 0x1151f8 - 0x115240
void entry_001151f8_0x1151f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001151f8_0x1151f8");
#endif

    ctx->pc = 0x1151f8u;

    // 0x1151f8: 0x3c014c00  lui         $at, 0x4C00
    ctx->pc = 0x1151f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)19456 << 16));
    // 0x1151fc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1151fcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x115200: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x115200u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x115204: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x115204u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x115208: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x115208u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x11520c: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x11520cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x115210: 0xa71824  and         $v1, $a1, $a3
    ctx->pc = 0x115210u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 7));
    // 0x115214: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x115214u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x115218: 0x31dc3  sra         $v1, $v1, 23
    ctx->pc = 0x115218u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 23));
    // 0x11521c: 0x34423cb0  ori         $v0, $v0, 0x3CB0
    ctx->pc = 0x11521cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)15536);
    // 0x115220: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x115220u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x115224: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x115224u;
    {
        const bool branch_taken_0x115224 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x115228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115224u;
        // 0x115228: 0x2463ffe7  addiu       $v1, $v1, -0x19 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967271));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115224) {
            ctx->pc = 0x115240u;
            return;
        }
    }
    ctx->pc = 0x11522Cu;
    // 0x11522c: 0x3c010da2  lui         $at, 0xDA2
    ctx->pc = 0x11522cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)3490 << 16));
    // 0x115230: 0x34214260  ori         $at, $at, 0x4260
    ctx->pc = 0x115230u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)16992);
    // 0x115234: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x115234u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x115238: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x115238u;
    {
        const bool branch_taken_0x115238 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11523Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115238u;
        // 0x11523c: 0x46000802  mul.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x115238) {
            ctx->pc = 0x115300u;
            return;
        }
    }
    ctx->pc = 0x115240u;
}

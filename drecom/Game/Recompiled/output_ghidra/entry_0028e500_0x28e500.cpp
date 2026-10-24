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

// Function: entry_0028e500
// Address: 0x28e500 - 0x28e550
void entry_0028e500_0x28e500(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0028e500_0x28e500");
#endif

    ctx->pc = 0x28e500u;

    // 0x28e500: 0x92026624  lbu         $v0, 0x6624($s0)
    ctx->pc = 0x28e500u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 26148)));
    // 0x28e504: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x28e504u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x28e508: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x28e508u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28e50c: 0x1462003b  bne         $v1, $v0, . + 4 + (0x3B << 2)
    ctx->pc = 0x28E50Cu;
    {
        const bool branch_taken_0x28e50c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x28e50c) {
            ctx->pc = 0x28E5FCu;
            return;
        }
    }
    ctx->pc = 0x28E514u;
    // 0x28e514: 0x24130100  addiu       $s3, $zero, 0x100
    ctx->pc = 0x28e514u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x28e518: 0x241400e0  addiu       $s4, $zero, 0xE0
    ctx->pc = 0x28e518u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
    // 0x28e51c: 0x44930000  mtc1        $s3, $f0
    ctx->pc = 0x28e51cu;
    { uint32_t bits = GPR_U32(ctx, 19); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28e520: 0x0  nop
    ctx->pc = 0x28e520u;
    // NOP
    // 0x28e524: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x28e524u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x28e528: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x28e528u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x28e52c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x28e52cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x28e530: 0x8fa600e4  lw          $a2, 0xE4($sp)
    ctx->pc = 0x28e530u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 228)));
    // 0x28e534: 0x4c00006  bltz        $a2, . + 4 + (0x6 << 2)
    ctx->pc = 0x28E534u;
    {
        const bool branch_taken_0x28e534 = (GPR_S32(ctx, 6) < 0);
        if (branch_taken_0x28e534) {
            ctx->pc = 0x28E550u;
            return;
        }
    }
    ctx->pc = 0x28E53Cu;
    // 0x28e53c: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x28e53cu;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28e540: 0x0  nop
    ctx->pc = 0x28e540u;
    // NOP
    // 0x28e544: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x28e544u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x28e548: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x28E548u;
    {
        const bool branch_taken_0x28e548 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x28e548) {
            ctx->pc = 0x28E56Cu;
            return;
        }
    }
    ctx->pc = 0x28E550u;
}

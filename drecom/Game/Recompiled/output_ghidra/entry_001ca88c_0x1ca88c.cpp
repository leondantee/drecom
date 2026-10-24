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

// Function: entry_001ca88c
// Address: 0x1ca88c - 0x1ca8e8
void entry_001ca88c_0x1ca88c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ca88c_0x1ca88c");
#endif

    ctx->pc = 0x1ca88cu;

    // 0x1ca88c: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1ca88cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1ca890: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x1ca890u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x1ca894: 0x10600014  beqz        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x1CA894u;
    {
        const bool branch_taken_0x1ca894 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ca894) {
            ctx->pc = 0x1CA8E8u;
            return;
        }
    }
    ctx->pc = 0x1CA89Cu;
    // 0x1ca89c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1ca89cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ca8a0: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1ca8a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1ca8a4: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x1ca8a4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x1ca8a8: 0x24040015  addiu       $a0, $zero, 0x15
    ctx->pc = 0x1ca8a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x1ca8ac: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1ca8acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1ca8b0: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x1ca8b0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x1ca8b4: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x1ca8b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1ca8b8: 0xa0800002  sb          $zero, 0x2($a0)
    ctx->pc = 0x1ca8b8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x1ca8bc: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1ca8bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1ca8c0: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x1ca8c0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1ca8c4: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1ca8c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1ca8c8: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x1ca8c8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x1ca8cc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1ca8ccu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ca8d0: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1ca8d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1ca8d4: 0xe4601284  swc1        $f0, 0x1284($v1)
    ctx->pc = 0x1ca8d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4740), bits); }
    // 0x1ca8d8: 0x3c034040  lui         $v1, 0x4040
    ctx->pc = 0x1ca8d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16448 << 16));
    // 0x1ca8dc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1ca8dcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ca8e0: 0x8fb10058  lw          $s1, 0x58($sp)
    ctx->pc = 0x1ca8e0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1ca8e4: 0xe6201280  swc1        $f0, 0x1280($s1)
    ctx->pc = 0x1ca8e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4736), bits); }
    ctx->pc = 0x1ca8e8u;
}

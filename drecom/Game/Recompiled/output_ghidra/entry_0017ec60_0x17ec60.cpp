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

// Function: entry_0017ec60
// Address: 0x17ec60 - 0x17ecbc
void entry_0017ec60_0x17ec60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017ec60_0x17ec60");
#endif

    ctx->pc = 0x17ec60u;

    // 0x17ec60: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x17ec60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x17ec64: 0x8c8300ac  lw          $v1, 0xAC($a0)
    ctx->pc = 0x17ec64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 172)));
    // 0x17ec68: 0x1060002b  beqz        $v1, . + 4 + (0x2B << 2)
    ctx->pc = 0x17EC68u;
    {
        const bool branch_taken_0x17ec68 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x17ec68) {
            ctx->pc = 0x17ED18u;
            return;
        }
    }
    ctx->pc = 0x17EC70u;
    // 0x17ec70: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x17ec70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x17ec74: 0x8c6200a8  lw          $v0, 0xA8($v1)
    ctx->pc = 0x17ec74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 168)));
    // 0x17ec78: 0x24440001  addiu       $a0, $v0, 0x1
    ctx->pc = 0x17ec78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x17ec7c: 0xac6400a8  sw          $a0, 0xA8($v1)
    ctx->pc = 0x17ec7cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 168), GPR_U32(ctx, 4));
    // 0x17ec80: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x17ec80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x17ec84: 0x8c4300a8  lw          $v1, 0xA8($v0)
    ctx->pc = 0x17ec84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 168)));
    // 0x17ec88: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x17ec88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x17ec8c: 0x8c4200ac  lw          $v0, 0xAC($v0)
    ctx->pc = 0x17ec8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 172)));
    // 0x17ec90: 0x1462000a  bne         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x17EC90u;
    {
        const bool branch_taken_0x17ec90 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x17ec90) {
            ctx->pc = 0x17ECBCu;
            return;
        }
    }
    ctx->pc = 0x17EC98u;
    // 0x17ec98: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x17ec98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x17ec9c: 0xac4000a8  sw          $zero, 0xA8($v0)
    ctx->pc = 0x17ec9cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 168), GPR_U32(ctx, 0));
    // 0x17eca0: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x17eca0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x17eca4: 0xac4000ac  sw          $zero, 0xAC($v0)
    ctx->pc = 0x17eca4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 172), GPR_U32(ctx, 0));
    // 0x17eca8: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x17eca8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x17ecac: 0xc460006c  lwc1        $f0, 0x6C($v1)
    ctx->pc = 0x17ecacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17ecb0: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x17ecb0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x17ecb4: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x17ECB4u;
    {
        const bool branch_taken_0x17ecb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17ecb4) {
            ctx->pc = 0x17ED04u;
            return;
        }
    }
    ctx->pc = 0x17ECBCu;
}

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

// Function: entry_0032d2f4
// Address: 0x32d2f4 - 0x32d364
void entry_0032d2f4_0x32d2f4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0032d2f4_0x32d2f4");
#endif

    ctx->pc = 0x32d2f4u;

    // 0x32d2f4: 0x24020035  addiu       $v0, $zero, 0x35
    ctx->pc = 0x32d2f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
    // 0x32d2f8: 0xafa200a0  sw          $v0, 0xA0($sp)
    ctx->pc = 0x32d2f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 2));
    // 0x32d2fc: 0xafa000a4  sw          $zero, 0xA4($sp)
    ctx->pc = 0x32d2fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 164), GPR_U32(ctx, 0));
    // 0x32d300: 0xafa000a8  sw          $zero, 0xA8($sp)
    ctx->pc = 0x32d300u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 168), GPR_U32(ctx, 0));
    // 0x32d304: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x32d304u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x32d308: 0xafa200ac  sw          $v0, 0xAC($sp)
    ctx->pc = 0x32d308u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 2));
    // 0x32d30c: 0x92222904  lbu         $v0, 0x2904($s1)
    ctx->pc = 0x32d30cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 10500)));
    // 0x32d310: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x32d310u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x32d314: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x32d314u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x32d318: 0x1462002d  bne         $v1, $v0, . + 4 + (0x2D << 2)
    ctx->pc = 0x32D318u;
    {
        const bool branch_taken_0x32d318 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x32d318) {
            ctx->pc = 0x32D3D0u;
            return;
        }
    }
    ctx->pc = 0x32D320u;
    // 0x32d320: 0x8e22282c  lw          $v0, 0x282C($s1)
    ctx->pc = 0x32d320u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 10284)));
    // 0x32d324: 0x28410028  slti        $at, $v0, 0x28
    ctx->pc = 0x32d324u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)40) ? 1 : 0);
    // 0x32d328: 0x1020000e  beqz        $at, . + 4 + (0xE << 2)
    ctx->pc = 0x32D328u;
    {
        const bool branch_taken_0x32d328 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x32d328) {
            ctx->pc = 0x32D364u;
            return;
        }
    }
    ctx->pc = 0x32D330u;
    // 0x32d330: 0x8e26282c  lw          $a2, 0x282C($s1)
    ctx->pc = 0x32d330u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 10284)));
    // 0x32d334: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x32d334u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x32d338: 0x0  nop
    ctx->pc = 0x32d338u;
    // NOP
    // 0x32d33c: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x32d33cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x32d340: 0x3c024220  lui         $v0, 0x4220
    ctx->pc = 0x32d340u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16928 << 16));
    // 0x32d344: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x32d344u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x32d348: 0x0  nop
    ctx->pc = 0x32d348u;
    // NOP
    // 0x32d34c: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x32d34cu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x32d350: 0x0  nop
    ctx->pc = 0x32d350u;
    // NOP
    // 0x32d354: 0x0  nop
    ctx->pc = 0x32d354u;
    // NOP
    // 0x32d358: 0xe7a000d4  swc1        $f0, 0xD4($sp)
    ctx->pc = 0x32d358u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
    // 0x32d35c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x32D35Cu;
    {
        const bool branch_taken_0x32d35c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x32d35c) {
            ctx->pc = 0x32D390u;
            return;
        }
    }
    ctx->pc = 0x32D364u;
}

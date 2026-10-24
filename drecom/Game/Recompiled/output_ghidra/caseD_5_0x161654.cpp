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

// Function: caseD_5
// Address: 0x161654 - 0x1616fc
void caseD_5_0x161654(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_5_0x161654");
#endif

    ctx->pc = 0x161654u;

    // 0x161654: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x161654u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x161658: 0xa2020000  sb          $v0, 0x0($s0)
    ctx->pc = 0x161658u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x16165c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x16165cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x161660: 0xa2020001  sb          $v0, 0x1($s0)
    ctx->pc = 0x161660u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x161664: 0xa2000002  sb          $zero, 0x2($s0)
    ctx->pc = 0x161664u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x161668: 0xa2000003  sb          $zero, 0x3($s0)
    ctx->pc = 0x161668u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x16166c: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x16166cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x161670: 0xc60013b8  lwc1        $f0, 0x13B8($s0)
    ctx->pc = 0x161670u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 5048)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x161674: 0xe6001290  swc1        $f0, 0x1290($s0)
    ctx->pc = 0x161674u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4752), bits); }
    // 0x161678: 0xa6001278  sh          $zero, 0x1278($s0)
    ctx->pc = 0x161678u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4728), (uint16_t)GPR_U32(ctx, 0));
    // 0x16167c: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x16167cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x161680: 0xa602127a  sh          $v0, 0x127A($s0)
    ctx->pc = 0x161680u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4730), (uint16_t)GPR_U32(ctx, 2));
    // 0x161684: 0xa600127c  sh          $zero, 0x127C($s0)
    ctx->pc = 0x161684u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4732), (uint16_t)GPR_U32(ctx, 0));
    // 0x161688: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x161688u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x16168c: 0x3c0297ff  lui         $v0, 0x97FF
    ctx->pc = 0x16168cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)38911 << 16));
    // 0x161690: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x161690u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x161694: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x161694u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x161698: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x161698u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x16169c: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x16169cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1616a0: 0x3c02bfff  lui         $v0, 0xBFFF
    ctx->pc = 0x1616a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49151 << 16));
    // 0x1616a4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1616a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1616a8: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1616a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1616ac: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x1616acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x1616b0: 0x920213b4  lbu         $v0, 0x13B4($s0)
    ctx->pc = 0x1616b0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 5044)));
    // 0x1616b4: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x1616b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1616b8: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x1616b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x1616bc: 0x1062001f  beq         $v1, $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x1616BCu;
    {
        const bool branch_taken_0x1616bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1616bc) {
            ctx->pc = 0x16173Cu;
            return;
        }
    }
    ctx->pc = 0x1616C4u;
    // 0x1616c4: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x1616c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1616c8: 0x10620018  beq         $v1, $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x1616C8u;
    {
        const bool branch_taken_0x1616c8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1616c8) {
            ctx->pc = 0x16172Cu;
            return;
        }
    }
    ctx->pc = 0x1616D0u;
    // 0x1616d0: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x1616d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1616d4: 0x10620011  beq         $v1, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1616D4u;
    {
        const bool branch_taken_0x1616d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1616d4) {
            ctx->pc = 0x16171Cu;
            return;
        }
    }
    ctx->pc = 0x1616DCu;
    // 0x1616dc: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x1616dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1616e0: 0x1062000a  beq         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1616E0u;
    {
        const bool branch_taken_0x1616e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1616e0) {
            ctx->pc = 0x16170Cu;
            return;
        }
    }
    ctx->pc = 0x1616E8u;
    // 0x1616e8: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x1616e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1616ec: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1616ECu;
    {
        const bool branch_taken_0x1616ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1616ec) {
            ctx->pc = 0x1616FCu;
            return;
        }
    }
    ctx->pc = 0x1616F4u;
    // 0x1616f4: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x1616F4u;
    {
        const bool branch_taken_0x1616f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1616f4) {
            ctx->pc = 0x161744u;
            return;
        }
    }
    ctx->pc = 0x1616FCu;
}

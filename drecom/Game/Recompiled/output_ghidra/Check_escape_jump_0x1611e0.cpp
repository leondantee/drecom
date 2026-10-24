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

// Function: Check_escape_jump
// Address: 0x1611e0 - 0x1612e8
void Check_escape_jump_0x1611e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Check_escape_jump_0x1611e0");
#endif

    ctx->pc = 0x1611e0u;

    // 0x1611e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1611e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1611e4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1611e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1611e8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1611e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1611ec: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x1611ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x1611f0: 0x2450dbc0  addiu       $s0, $v0, -0x2440
    ctx->pc = 0x1611f0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958016));
    // 0x1611f4: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x1611f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x1611f8: 0x24510080  addiu       $s1, $v0, 0x80
    ctx->pc = 0x1611f8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
    // 0x1611fc: 0x8e22009c  lw          $v0, 0x9C($s1)
    ctx->pc = 0x1611fcu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D011Cu));
    // 0x161200: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x161200u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x161204: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x161204u;
    {
        const bool branch_taken_0x161204 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x161204) {
            ctx->pc = 0x161218u;
            goto label_161218;
        }
    }
    ctx->pc = 0x16120Cu;
    // 0x16120c: 0x70001628  paddub      $v0, $zero, $zero
    ctx->pc = 0x16120cu;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x161210: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x161210u;
    {
        const bool branch_taken_0x161210 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x161210) {
            ctx->pc = 0x1612D4u;
            goto label_1612d4;
        }
    }
    ctx->pc = 0x161218u;
label_161218:
    // 0x161218: 0xc6011388  lwc1        $f1, 0x1388($s0)
    ctx->pc = 0x161218u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 5000)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16121c: 0x3c024240  lui         $v0, 0x4240
    ctx->pc = 0x16121cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16960 << 16));
    // 0x161220: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x161220u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x161224: 0x0  nop
    ctx->pc = 0x161224u;
    // NOP
    // 0x161228: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x161228u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16122c: 0x0  nop
    ctx->pc = 0x16122cu;
    // NOP
    // 0x161230: 0x4501000e  bc1t        . + 4 + (0xE << 2)
    ctx->pc = 0x161230u;
    {
        const bool branch_taken_0x161230 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x161230) {
            ctx->pc = 0x16126Cu;
            goto label_16126c;
        }
    }
    ctx->pc = 0x161238u;
    // 0x161238: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x161238u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16123c: 0xa2020000  sb          $v0, 0x0($s0)
    ctx->pc = 0x16123cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x161240: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x161240u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x161244: 0xa2020001  sb          $v0, 0x1($s0)
    ctx->pc = 0x161244u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x161248: 0xa2000002  sb          $zero, 0x2($s0)
    ctx->pc = 0x161248u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x16124c: 0xa2000003  sb          $zero, 0x3($s0)
    ctx->pc = 0x16124cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x161250: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x161250u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x161254: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x161254u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x161258: 0xa2020002  sb          $v0, 0x2($s0)
    ctx->pc = 0x161258u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x16125c: 0xc6001380  lwc1        $f0, 0x1380($s0)
    ctx->pc = 0x16125cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x161260: 0xe6001290  swc1        $f0, 0x1290($s0)
    ctx->pc = 0x161260u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4752), bits); }
    // 0x161264: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x161264u;
    {
        const bool branch_taken_0x161264 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x161264) {
            ctx->pc = 0x161298u;
            goto label_161298;
        }
    }
    ctx->pc = 0x16126Cu;
label_16126c:
    // 0x16126c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x16126cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x161270: 0xa2020000  sb          $v0, 0x0($s0)
    ctx->pc = 0x161270u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x161274: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x161274u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x161278: 0xa2020001  sb          $v0, 0x1($s0)
    ctx->pc = 0x161278u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x16127c: 0xa2000002  sb          $zero, 0x2($s0)
    ctx->pc = 0x16127cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x161280: 0xa2000003  sb          $zero, 0x3($s0)
    ctx->pc = 0x161280u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x161284: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x161284u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x161288: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x161288u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x16128c: 0xa2020002  sb          $v0, 0x2($s0)
    ctx->pc = 0x16128cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x161290: 0xc60000d4  lwc1        $f0, 0xD4($s0)
    ctx->pc = 0x161290u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x161294: 0xe6001290  swc1        $f0, 0x1290($s0)
    ctx->pc = 0x161294u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4752), bits); }
label_161298:
    // 0x161298: 0xa6001278  sh          $zero, 0x1278($s0)
    ctx->pc = 0x161298u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4728), (uint16_t)GPR_U32(ctx, 0));
    // 0x16129c: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x16129cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1612a0: 0xa602127a  sh          $v0, 0x127A($s0)
    ctx->pc = 0x1612a0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4730), (uint16_t)GPR_U32(ctx, 2));
    // 0x1612a4: 0xa600127c  sh          $zero, 0x127C($s0)
    ctx->pc = 0x1612a4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4732), (uint16_t)GPR_U32(ctx, 0));
    // 0x1612a8: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x1612a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1612ac: 0x3c0297ff  lui         $v0, 0x97FF
    ctx->pc = 0x1612acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)38911 << 16));
    // 0x1612b0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1612b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1612b4: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1612b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1612b8: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x1612b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x1612bc: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x1612bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1612c0: 0x3c02bfff  lui         $v0, 0xBFFF
    ctx->pc = 0x1612c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49151 << 16));
    // 0x1612c4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1612c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1612c8: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1612c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1612cc: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x1612ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x1612d0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1612d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1612d4:
    // 0x1612d4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1612d4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1612d8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1612d8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1612dc: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x1612dcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1612e0: 0x3e00008  jr          $ra
    ctx->pc = 0x1612E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1612E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1612E8u;
}

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

// Function: entry_001bdd58
// Address: 0x1bdd58 - 0x1bde24
void entry_001bdd58_0x1bdd58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bdd58_0x1bdd58");
#endif

    switch (ctx->pc) {
        case 0x1bdd7cu: goto label_1bdd7c;
        case 0x1bdda8u: goto label_1bdda8;
        default: break;
    }

    ctx->pc = 0x1bdd58u;

    // 0x1bdd58: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1bdd58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1bdd5c: 0xc4411280  lwc1        $f1, 0x1280($v0)
    ctx->pc = 0x1bdd5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4736)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1bdd60: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1bdd60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1bdd64: 0xc4601284  lwc1        $f0, 0x1284($v1)
    ctx->pc = 0x1bdd64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4740)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1bdd68: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1bdd68u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1bdd6c: 0xe4601284  swc1        $f0, 0x1284($v1)
    ctx->pc = 0x1bdd6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4740), bits); }
    // 0x1bdd70: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x1bdd70u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1bdd74: 0xc097530  jal         func_25D4C0
    ctx->pc = 0x1BDD74u;
    SET_GPR_U32(ctx, 31, 0x1BDD7Cu);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x1BDD74u, 0x1BDD7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BDD7Cu;
label_1bdd7c:
    // 0x1bdd7c: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1bdd7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1bdd80: 0x8485127e  lh          $a1, 0x127E($a0)
    ctx->pc = 0x1bdd80u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4734)));
    // 0x1bdd84: 0x10a0002c  beqz        $a1, . + 4 + (0x2C << 2)
    ctx->pc = 0x1BDD84u;
    {
        const bool branch_taken_0x1bdd84 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bdd84) {
            ctx->pc = 0x1BDE38u;
            return;
        }
    }
    ctx->pc = 0x1BDD8Cu;
    // 0x1bdd8c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1bdd8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1bdd90: 0x8462127e  lh          $v0, 0x127E($v1)
    ctx->pc = 0x1bdd90u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4734)));
    // 0x1bdd94: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1bdd94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1bdd98: 0xa462127e  sh          $v0, 0x127E($v1)
    ctx->pc = 0x1bdd98u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4734), (uint16_t)GPR_U32(ctx, 2));
    // 0x1bdd9c: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x1bdd9cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1bdda0: 0xc0587a8  jal         func_161EA0
    ctx->pc = 0x1BDDA0u;
    SET_GPR_U32(ctx, 31, 0x1BDDA8u);
    ctx->pc = 0x161EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x161EA0u, 0x1BDDA0u, 0x1BDDA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BDDA8u;
label_1bdda8:
    // 0x1bdda8: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x1bdda8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1bddac: 0x10800049  beqz        $a0, . + 4 + (0x49 << 2)
    ctx->pc = 0x1BDDACu;
    {
        const bool branch_taken_0x1bddac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bddac) {
            ctx->pc = 0x1BDED4u;
            return;
        }
    }
    ctx->pc = 0x1BDDB4u;
    // 0x1bddb4: 0x8fb00068  lw          $s0, 0x68($sp)
    ctx->pc = 0x1bddb4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1bddb8: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x1bddb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1bddbc: 0x3c130100  lui         $s3, 0x100
    ctx->pc = 0x1bddbcu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)256 << 16));
    // 0x1bddc0: 0x732824  and         $a1, $v1, $s3
    ctx->pc = 0x1bddc0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & GPR_U64(ctx, 19));
    // 0x1bddc4: 0x10a00251  beqz        $a1, . + 4 + (0x251 << 2)
    ctx->pc = 0x1BDDC4u;
    {
        const bool branch_taken_0x1bddc4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bddc4) {
            ctx->pc = 0x1BE70Cu;
            return;
        }
    }
    ctx->pc = 0x1BDDCCu;
    // 0x1bddcc: 0x8fa60068  lw          $a2, 0x68($sp)
    ctx->pc = 0x1bddccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1bddd0: 0x8cc70008  lw          $a3, 0x8($a2)
    ctx->pc = 0x1bddd0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x1bddd4: 0x3c03feff  lui         $v1, 0xFEFF
    ctx->pc = 0x1bddd4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65279 << 16));
    // 0x1bddd8: 0x3464ffff  ori         $a0, $v1, 0xFFFF
    ctx->pc = 0x1bddd8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1bdddc: 0xe41824  and         $v1, $a3, $a0
    ctx->pc = 0x1bdddcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & GPR_U64(ctx, 4));
    // 0x1bdde0: 0xacc30008  sw          $v1, 0x8($a2)
    ctx->pc = 0x1bdde0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 3));
    // 0x1bdde4: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1bdde4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1bdde8: 0x908313a6  lbu         $v1, 0x13A6($a0)
    ctx->pc = 0x1bdde8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 5030)));
    // 0x1bddec: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x1bddecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1bddf0: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1bddf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1bddf4: 0x1083000b  beq         $a0, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x1BDDF4u;
    {
        const bool branch_taken_0x1bddf4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1bddf4) {
            ctx->pc = 0x1BDE24u;
            return;
        }
    }
    ctx->pc = 0x1BDDFCu;
    // 0x1bddfc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1bddfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bde00: 0x10830008  beq         $a0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1BDE00u;
    {
        const bool branch_taken_0x1bde00 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1bde00) {
            ctx->pc = 0x1BDE24u;
            return;
        }
    }
    ctx->pc = 0x1BDE08u;
    // 0x1bde08: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1bde08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1bde0c: 0x1083023f  beq         $a0, $v1, . + 4 + (0x23F << 2)
    ctx->pc = 0x1BDE0Cu;
    {
        const bool branch_taken_0x1bde0c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1bde0c) {
            ctx->pc = 0x1BE70Cu;
            return;
        }
    }
    ctx->pc = 0x1BDE14u;
    // 0x1bde14: 0x1080023d  beqz        $a0, . + 4 + (0x23D << 2)
    ctx->pc = 0x1BDE14u;
    {
        const bool branch_taken_0x1bde14 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bde14) {
            ctx->pc = 0x1BE70Cu;
            return;
        }
    }
    ctx->pc = 0x1BDE1Cu;
    // 0x1bde1c: 0x1000023b  b           . + 4 + (0x23B << 2)
    ctx->pc = 0x1BDE1Cu;
    {
        const bool branch_taken_0x1bde1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bde1c) {
            ctx->pc = 0x1BE70Cu;
            return;
        }
    }
    ctx->pc = 0x1BDE24u;
}

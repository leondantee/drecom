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

// Function: entry_0015e248
// Address: 0x15e248 - 0x15e2c0
void entry_0015e248_0x15e248(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015e248_0x15e248");
#endif

    switch (ctx->pc) {
        case 0x15e27cu: goto label_15e27c;
        case 0x15e284u: goto label_15e284;
        default: break;
    }

    ctx->pc = 0x15e248u;

    // 0x15e248: 0x3c023e19  lui         $v0, 0x3E19
    ctx->pc = 0x15e248u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15897 << 16));
    // 0x15e24c: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x15e24cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
    // 0x15e250: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x15e250u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x15e254: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x15e254u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x15e258: 0x24050017  addiu       $a1, $zero, 0x17
    ctx->pc = 0x15e258u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    // 0x15e25c: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x15e25cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x15e260: 0x27a70030  addiu       $a3, $sp, 0x30
    ctx->pc = 0x15e260u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x15e264: 0x27a80040  addiu       $t0, $sp, 0x40
    ctx->pc = 0x15e264u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x15e268: 0x27a90050  addiu       $t1, $sp, 0x50
    ctx->pc = 0x15e268u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x15e26c: 0x27aa0060  addiu       $t2, $sp, 0x60
    ctx->pc = 0x15e26cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x15e270: 0xc7ac007c  lwc1        $f12, 0x7C($sp)
    ctx->pc = 0x15e270u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x15e274: 0xc086970  jal         func_21A5C0
    ctx->pc = 0x15E274u;
    SET_GPR_U32(ctx, 31, 0x15E27Cu);
    ctx->pc = 0x21A5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21A5C0u, 0x15E274u, 0x15E27Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15E27Cu;
label_15e27c:
    // 0x15e27c: 0xc067694  jal         func_19DA50
    ctx->pc = 0x15E27Cu;
    SET_GPR_U32(ctx, 31, 0x15E284u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x15E27Cu, 0x15E284u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15E284u;
label_15e284:
    // 0x15e284: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x15e284u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x15e288: 0x30430003  andi        $v1, $v0, 0x3
    ctx->pc = 0x15e288u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x15e28c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x15e28cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x15e290: 0x1062001d  beq         $v1, $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x15E290u;
    {
        const bool branch_taken_0x15e290 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x15e290) {
            ctx->pc = 0x15E308u;
            return;
        }
    }
    ctx->pc = 0x15E298u;
    // 0x15e298: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x15e298u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x15e29c: 0x10620014  beq         $v1, $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x15E29Cu;
    {
        const bool branch_taken_0x15e29c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x15e29c) {
            ctx->pc = 0x15E2F0u;
            return;
        }
    }
    ctx->pc = 0x15E2A4u;
    // 0x15e2a4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x15e2a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15e2a8: 0x1062000b  beq         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x15E2A8u;
    {
        const bool branch_taken_0x15e2a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x15e2a8) {
            ctx->pc = 0x15E2D8u;
            return;
        }
    }
    ctx->pc = 0x15E2B0u;
    // 0x15e2b0: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x15E2B0u;
    {
        const bool branch_taken_0x15e2b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x15e2b0) {
            ctx->pc = 0x15E2C0u;
            return;
        }
    }
    ctx->pc = 0x15E2B8u;
    // 0x15e2b8: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x15E2B8u;
    {
        const bool branch_taken_0x15e2b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15e2b8) {
            ctx->pc = 0x15E318u;
            return;
        }
    }
    ctx->pc = 0x15E2C0u;
}

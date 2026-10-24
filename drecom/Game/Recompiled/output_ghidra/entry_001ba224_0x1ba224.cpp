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

// Function: entry_001ba224
// Address: 0x1ba224 - 0x1ba29c
void entry_001ba224_0x1ba224(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ba224_0x1ba224");
#endif

    switch (ctx->pc) {
        case 0x1ba260u: goto label_1ba260;
        case 0x1ba298u: goto label_1ba298;
        default: break;
    }

    ctx->pc = 0x1ba224u;

    // 0x1ba224: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1ba224u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1ba228: 0x8c221a64  lw          $v0, 0x1A64($at)
    ctx->pc = 0x1ba228u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D1A64u));
    // 0x1ba22c: 0x34420100  ori         $v0, $v0, 0x100
    ctx->pc = 0x1ba22cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)256);
    // 0x1ba230: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1ba230u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1ba234: 0xac221a64  sw          $v0, 0x1A64($at)
    ctx->pc = 0x1ba234u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D1A64u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A64u, _value); } while (0);
    // 0x1ba238: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1ba238u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1ba23c: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x1ba23cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1ba240: 0x3c020400  lui         $v0, 0x400
    ctx->pc = 0x1ba240u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
    // 0x1ba244: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x1ba244u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1ba248: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x1ba248u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    // 0x1ba24c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1ba24cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1ba250: 0x70602628  paddub      $a0, $v1, $zero
    ctx->pc = 0x1ba250u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x1ba254: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1ba254u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1ba258: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x1BA258u;
    SET_GPR_U32(ctx, 31, 0x1BA260u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x1BA258u, 0x1BA260u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BA260u;
label_1ba260:
    // 0x1ba260: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x1ba260u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1ba264: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1ba264u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1ba268: 0x8c451b64  lw          $a1, 0x1B64($v0)
    ctx->pc = 0x1ba268u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7012)));
    // 0x1ba26c: 0x10a0000b  beqz        $a1, . + 4 + (0xB << 2)
    ctx->pc = 0x1BA26Cu;
    {
        const bool branch_taken_0x1ba26c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ba26c) {
            ctx->pc = 0x1BA29Cu;
            return;
        }
    }
    ctx->pc = 0x1BA274u;
    // 0x1ba274: 0x3c073f19  lui         $a3, 0x3F19
    ctx->pc = 0x1ba274u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)16153 << 16));
    // 0x1ba278: 0x34e6999a  ori         $a2, $a3, 0x999A
    ctx->pc = 0x1ba278u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)39322);
    // 0x1ba27c: 0x44866000  mtc1        $a2, $f12
    ctx->pc = 0x1ba27cu;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1ba280: 0x8fa80068  lw          $t0, 0x68($sp)
    ctx->pc = 0x1ba280u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1ba284: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1ba284u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1ba288: 0x25040180  addiu       $a0, $t0, 0x180
    ctx->pc = 0x1ba288u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), 384));
    // 0x1ba28c: 0x24450180  addiu       $a1, $v0, 0x180
    ctx->pc = 0x1ba28cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 384));
    // 0x1ba290: 0xc040ed8  jal         func_103B60
    ctx->pc = 0x1BA290u;
    SET_GPR_U32(ctx, 31, 0x1BA298u);
    ctx->pc = 0x103B60u;
    {
        ctx->pc = 0x1BA298u;
        ps2_stubs::sceVu0ScaleVectorXYZ(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1BA298u) { return; }
    ctx->pc = 0x1BA298u;
label_1ba298:
    // 0x1ba298: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x1ba298u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1ba29cu;
}

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

// Function: Water_dust_trans
// Address: 0x1af090 - 0x1af554
void Water_dust_trans_0x1af090(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Water_dust_trans_0x1af090");
#endif

    switch (ctx->pc) {
        case 0x1af0f4u: goto label_1af0f4;
        case 0x1af20cu: goto label_1af20c;
        case 0x1af2b8u: goto label_1af2b8;
        case 0x1af2c4u: goto label_1af2c4;
        case 0x1af2f8u: goto label_1af2f8;
        case 0x1af34cu: goto label_1af34c;
        case 0x1af4c8u: goto label_1af4c8;
        case 0x1af520u: goto label_1af520;
        default: break;
    }

    ctx->pc = 0x1af090u;

    // 0x1af090: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x1af090u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x1af094: 0x7fbf0090  sq          $ra, 0x90($sp)
    ctx->pc = 0x1af094u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 31));
    // 0x1af098: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x1af098u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x1af09c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x1af09cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x1af0a0: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x1af0a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x1af0a4: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1af0a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x1af0a8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1af0a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1af0ac: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1af0acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1af0b0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1af0b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1af0b4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1af0b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1af0b8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1af0b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1af0bc: 0x3c03005f  lui         $v1, 0x5F
    ctx->pc = 0x1af0bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)95 << 16));
    // 0x1af0c0: 0x2470f010  addiu       $s0, $v1, -0xFF0
    ctx->pc = 0x1af0c0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4294963216));
    // 0x1af0c4: 0x3c03005f  lui         $v1, 0x5F
    ctx->pc = 0x1af0c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)95 << 16));
    // 0x1af0c8: 0x2463f000  addiu       $v1, $v1, -0x1000
    ctx->pc = 0x1af0c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294963200));
    // 0x1af0cc: 0xafa300d8  sw          $v1, 0xD8($sp)
    ctx->pc = 0x1af0ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 216), GPR_U32(ctx, 3));
    // 0x1af0d0: 0x3c03005d  lui         $v1, 0x5D
    ctx->pc = 0x1af0d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
    // 0x1af0d4: 0x24630080  addiu       $v1, $v1, 0x80
    ctx->pc = 0x1af0d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 128));
    // 0x1af0d8: 0xafa300dc  sw          $v1, 0xDC($sp)
    ctx->pc = 0x1af0d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 220), GPR_U32(ctx, 3));
    // 0x1af0dc: 0x3c01005f  lui         $at, 0x5F
    ctx->pc = 0x1af0dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)95 << 16));
    // 0x1af0e0: 0x9023f001  lbu         $v1, -0xFFF($at)
    ctx->pc = 0x1af0e0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x5EF001u));
    // 0x1af0e4: 0x1060010e  beqz        $v1, . + 4 + (0x10E << 2)
    ctx->pc = 0x1AF0E4u;
    {
        const bool branch_taken_0x1af0e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1af0e4) {
            ctx->pc = 0x1AF520u;
            goto label_1af520;
        }
    }
    ctx->pc = 0x1AF0ECu;
    // 0x1af0ec: 0xc06b510  jal         func_1AD440
    ctx->pc = 0x1AF0ECu;
    SET_GPR_U32(ctx, 31, 0x1AF0F4u);
    ctx->pc = 0x1AD440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AD440u, 0x1AF0ECu, 0x1AF0F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AF0F4u;
label_1af0f4:
    // 0x1af0f4: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x1af0f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x1af0f8: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1af0f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x1af0fc: 0x2010821  addu        $at, $s0, $at
    ctx->pc = 0x1af0fcu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
    // 0x1af100: 0xac22b4b0  sw          $v0, -0x4B50($at)
    ctx->pc = 0x1af100u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294948016), GPR_U32(ctx, 2));
    // 0x1af104: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x1af104u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x1af108: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1af108u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x1af10c: 0x2010821  addu        $at, $s0, $at
    ctx->pc = 0x1af10cu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
    // 0x1af110: 0xac22b4b4  sw          $v0, -0x4B4C($at)
    ctx->pc = 0x1af110u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294948020), GPR_U32(ctx, 2));
    // 0x1af114: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x1af114u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x1af118: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1af118u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x1af11c: 0x2010821  addu        $at, $s0, $at
    ctx->pc = 0x1af11cu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
    // 0x1af120: 0xac22b4b8  sw          $v0, -0x4B48($at)
    ctx->pc = 0x1af120u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294948024), GPR_U32(ctx, 2));
    // 0x1af124: 0x24020040  addiu       $v0, $zero, 0x40
    ctx->pc = 0x1af124u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x1af128: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1af128u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x1af12c: 0x2010821  addu        $at, $s0, $at
    ctx->pc = 0x1af12cu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
    // 0x1af130: 0xac22b4bc  sw          $v0, -0x4B44($at)
    ctx->pc = 0x1af130u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294948028), GPR_U32(ctx, 2));
    // 0x1af134: 0x24020028  addiu       $v0, $zero, 0x28
    ctx->pc = 0x1af134u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x1af138: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1af138u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x1af13c: 0x2010821  addu        $at, $s0, $at
    ctx->pc = 0x1af13cu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
    // 0x1af140: 0xac22b4c0  sw          $v0, -0x4B40($at)
    ctx->pc = 0x1af140u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294948032), GPR_U32(ctx, 2));
    // 0x1af144: 0x24020028  addiu       $v0, $zero, 0x28
    ctx->pc = 0x1af144u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x1af148: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1af148u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x1af14c: 0x2010821  addu        $at, $s0, $at
    ctx->pc = 0x1af14cu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
    // 0x1af150: 0xac22b4c4  sw          $v0, -0x4B3C($at)
    ctx->pc = 0x1af150u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294948036), GPR_U32(ctx, 2));
    // 0x1af154: 0x24020028  addiu       $v0, $zero, 0x28
    ctx->pc = 0x1af154u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x1af158: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1af158u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x1af15c: 0x2010821  addu        $at, $s0, $at
    ctx->pc = 0x1af15cu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
    // 0x1af160: 0xac22b4c8  sw          $v0, -0x4B38($at)
    ctx->pc = 0x1af160u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294948040), GPR_U32(ctx, 2));
    // 0x1af164: 0x24020040  addiu       $v0, $zero, 0x40
    ctx->pc = 0x1af164u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x1af168: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1af168u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x1af16c: 0x2010821  addu        $at, $s0, $at
    ctx->pc = 0x1af16cu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
    // 0x1af170: 0xac22b4cc  sw          $v0, -0x4B34($at)
    ctx->pc = 0x1af170u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294948044), GPR_U32(ctx, 2));
    // 0x1af174: 0x24020030  addiu       $v0, $zero, 0x30
    ctx->pc = 0x1af174u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x1af178: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1af178u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x1af17c: 0x2010821  addu        $at, $s0, $at
    ctx->pc = 0x1af17cu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
    // 0x1af180: 0xac22b4d0  sw          $v0, -0x4B30($at)
    ctx->pc = 0x1af180u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294948048), GPR_U32(ctx, 2));
    // 0x1af184: 0x24020030  addiu       $v0, $zero, 0x30
    ctx->pc = 0x1af184u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x1af188: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1af188u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x1af18c: 0x2010821  addu        $at, $s0, $at
    ctx->pc = 0x1af18cu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
    // 0x1af190: 0xac22b4d4  sw          $v0, -0x4B2C($at)
    ctx->pc = 0x1af190u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294948052), GPR_U32(ctx, 2));
    // 0x1af194: 0x24020030  addiu       $v0, $zero, 0x30
    ctx->pc = 0x1af194u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x1af198: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1af198u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x1af19c: 0x2010821  addu        $at, $s0, $at
    ctx->pc = 0x1af19cu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
    // 0x1af1a0: 0xac22b4d8  sw          $v0, -0x4B28($at)
    ctx->pc = 0x1af1a0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294948056), GPR_U32(ctx, 2));
    // 0x1af1a4: 0x24020040  addiu       $v0, $zero, 0x40
    ctx->pc = 0x1af1a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x1af1a8: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1af1a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x1af1ac: 0x2010821  addu        $at, $s0, $at
    ctx->pc = 0x1af1acu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
    // 0x1af1b0: 0xac22b4dc  sw          $v0, -0x4B24($at)
    ctx->pc = 0x1af1b0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294948060), GPR_U32(ctx, 2));
    // 0x1af1b4: 0x24020038  addiu       $v0, $zero, 0x38
    ctx->pc = 0x1af1b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    // 0x1af1b8: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1af1b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x1af1bc: 0x2010821  addu        $at, $s0, $at
    ctx->pc = 0x1af1bcu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
    // 0x1af1c0: 0xac22b4e0  sw          $v0, -0x4B20($at)
    ctx->pc = 0x1af1c0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294948064), GPR_U32(ctx, 2));
    // 0x1af1c4: 0x24020038  addiu       $v0, $zero, 0x38
    ctx->pc = 0x1af1c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    // 0x1af1c8: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1af1c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x1af1cc: 0x2010821  addu        $at, $s0, $at
    ctx->pc = 0x1af1ccu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
    // 0x1af1d0: 0xac22b4e4  sw          $v0, -0x4B1C($at)
    ctx->pc = 0x1af1d0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294948068), GPR_U32(ctx, 2));
    // 0x1af1d4: 0x24020038  addiu       $v0, $zero, 0x38
    ctx->pc = 0x1af1d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    // 0x1af1d8: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1af1d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x1af1dc: 0x2010821  addu        $at, $s0, $at
    ctx->pc = 0x1af1dcu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
    // 0x1af1e0: 0xac22b4e8  sw          $v0, -0x4B18($at)
    ctx->pc = 0x1af1e0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294948072), GPR_U32(ctx, 2));
    // 0x1af1e4: 0x24020040  addiu       $v0, $zero, 0x40
    ctx->pc = 0x1af1e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x1af1e8: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1af1e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x1af1ec: 0x2010821  addu        $at, $s0, $at
    ctx->pc = 0x1af1ecu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
    // 0x1af1f0: 0xac22b4ec  sw          $v0, -0x4B14($at)
    ctx->pc = 0x1af1f0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294948076), GPR_U32(ctx, 2));
    // 0x1af1f4: 0x26161d08  addiu       $s6, $s0, 0x1D08
    ctx->pc = 0x1af1f4u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 16), 7432));
    // 0x1af1f8: 0x26d67ff8  addiu       $s6, $s6, 0x7FF8
    ctx->pc = 0x1af1f8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 32760));
    // 0x1af1fc: 0x70009e28  paddub      $s3, $zero, $zero
    ctx->pc = 0x1af1fcu;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1af200: 0x7000be28  paddub      $s7, $zero, $zero
    ctx->pc = 0x1af200u;
    SET_GPR_VEC(ctx, 23, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1af204: 0x100000c0  b           . + 4 + (0xC0 << 2)
    ctx->pc = 0x1AF204u;
    {
        const bool branch_taken_0x1af204 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1af204) {
            ctx->pc = 0x1AF508u;
            goto label_1af508;
        }
    }
    ctx->pc = 0x1AF20Cu;
label_1af20c:
    // 0x1af20c: 0x92c20000  lbu         $v0, 0x0($s6)
    ctx->pc = 0x1af20cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x1af210: 0x104000bb  beqz        $v0, . + 4 + (0xBB << 2)
    ctx->pc = 0x1AF210u;
    {
        const bool branch_taken_0x1af210 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1af210) {
            ctx->pc = 0x1AF500u;
            goto label_1af500;
        }
    }
    ctx->pc = 0x1AF218u;
    // 0x1af218: 0x131100  sll         $v0, $s3, 4
    ctx->pc = 0x1af218u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
    // 0x1af21c: 0x202a021  addu        $s4, $s0, $v0
    ctx->pc = 0x1af21cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1af220: 0x131040  sll         $v0, $s3, 1
    ctx->pc = 0x1af220u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 1));
    // 0x1af224: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x1af224u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1af228: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1af228u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x1af22c: 0x410821  addu        $at, $v0, $at
    ctx->pc = 0x1af22cu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
    // 0x1af230: 0x8422a4d0  lh          $v0, -0x5B30($at)
    ctx->pc = 0x1af230u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294943952)));
    // 0x1af234: 0x2ac3c  dsll32      $s5, $v0, 16
    ctx->pc = 0x1af234u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1af238: 0x15ac3f  dsra32      $s5, $s5, 16
    ctx->pc = 0x1af238u;
    SET_GPR_S64(ctx, 21, GPR_S64(ctx, 21) >> (32 + 16));
    // 0x1af23c: 0x2ea101f4  sltiu       $at, $s5, 0x1F4
    ctx->pc = 0x1af23cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)(int64_t)(int32_t)500) ? 1 : 0);
    // 0x1af240: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x1AF240u;
    {
        const bool branch_taken_0x1af240 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1af240) {
            ctx->pc = 0x1AF254u;
            goto label_1af254;
        }
    }
    ctx->pc = 0x1AF248u;
    // 0x1af248: 0x24110003  addiu       $s1, $zero, 0x3
    ctx->pc = 0x1af248u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1af24c: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x1AF24Cu;
    {
        const bool branch_taken_0x1af24c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1af24c) {
            ctx->pc = 0x1AF288u;
            goto label_1af288;
        }
    }
    ctx->pc = 0x1AF254u;
label_1af254:
    // 0x1af254: 0x2ea103e8  sltiu       $at, $s5, 0x3E8
    ctx->pc = 0x1af254u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)(int64_t)(int32_t)1000) ? 1 : 0);
    // 0x1af258: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x1AF258u;
    {
        const bool branch_taken_0x1af258 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1af258) {
            ctx->pc = 0x1AF26Cu;
            goto label_1af26c;
        }
    }
    ctx->pc = 0x1AF260u;
    // 0x1af260: 0x24110002  addiu       $s1, $zero, 0x2
    ctx->pc = 0x1af260u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1af264: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1AF264u;
    {
        const bool branch_taken_0x1af264 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1af264) {
            ctx->pc = 0x1AF288u;
            goto label_1af288;
        }
    }
    ctx->pc = 0x1AF26Cu;
label_1af26c:
    // 0x1af26c: 0x2ea107d0  sltiu       $at, $s5, 0x7D0
    ctx->pc = 0x1af26cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)(int64_t)(int32_t)2000) ? 1 : 0);
    // 0x1af270: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x1AF270u;
    {
        const bool branch_taken_0x1af270 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1af270) {
            ctx->pc = 0x1AF284u;
            goto label_1af284;
        }
    }
    ctx->pc = 0x1AF278u;
    // 0x1af278: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x1af278u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1af27c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1AF27Cu;
    {
        const bool branch_taken_0x1af27c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1af27c) {
            ctx->pc = 0x1AF288u;
            goto label_1af288;
        }
    }
    ctx->pc = 0x1AF284u;
label_1af284:
    // 0x1af284: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x1af284u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1af288:
    // 0x1af288: 0xc6810008  lwc1        $f1, 0x8($s4)
    ctx->pc = 0x1af288u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1af28c: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x1af28cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x1af290: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1af290u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1af294: 0x0  nop
    ctx->pc = 0x1af294u;
    // NOP
    // 0x1af298: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1af298u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1af29c: 0xe6800008  swc1        $f0, 0x8($s4)
    ctx->pc = 0x1af29cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 8), bits); }
    // 0x1af2a0: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x1af2a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x1af2a4: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x1af2a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x1af2a8: 0x2445e550  addiu       $a1, $v0, -0x1AB0
    ctx->pc = 0x1af2a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960464));
    // 0x1af2ac: 0x72803628  paddub      $a2, $s4, $zero
    ctx->pc = 0x1af2acu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
    // 0x1af2b0: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x1AF2B0u;
    SET_GPR_U32(ctx, 31, 0x1AF2B8u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x1AF2B8u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1AF2B8u) { return; }
    ctx->pc = 0x1AF2B8u;
label_1af2b8:
    // 0x1af2b8: 0xc7ac00bc  lwc1        $f12, 0xBC($sp)
    ctx->pc = 0x1af2b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1af2bc: 0xc047fa2  jal         func_11FE88
    ctx->pc = 0x1AF2BCu;
    SET_GPR_U32(ctx, 31, 0x1AF2C4u);
    ctx->pc = 0x11FE88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FE88u, 0x1AF2BCu, 0x1AF2C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AF2C4u;
label_1af2c4:
    // 0x1af2c4: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x1af2c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1af2c8: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x1af2c8u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x1af2cc: 0x131040  sll         $v0, $s3, 1
    ctx->pc = 0x1af2ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 1));
    // 0x1af2d0: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x1af2d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1af2d4: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1af2d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x1af2d8: 0x410821  addu        $at, $v0, $at
    ctx->pc = 0x1af2d8u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
    // 0x1af2dc: 0xa423a4d0  sh          $v1, -0x5B30($at)
    ctx->pc = 0x1af2dcu;
    WRITE16(ADD32(GPR_U32(ctx, 1), 4294943952), (uint16_t)GPR_U32(ctx, 3));
    // 0x1af2e0: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x1af2e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x1af2e4: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x1af2e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x1af2e8: 0x2445e510  addiu       $a1, $v0, -0x1AF0
    ctx->pc = 0x1af2e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960400));
    // 0x1af2ec: 0x72803628  paddub      $a2, $s4, $zero
    ctx->pc = 0x1af2ecu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
    // 0x1af2f0: 0xc04f958  jal         func_13E560
    ctx->pc = 0x1AF2F0u;
    SET_GPR_U32(ctx, 31, 0x1AF2F8u);
    ctx->pc = 0x13E560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13E560u, 0x1AF2F0u, 0x1AF2F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AF2F8u;
label_1af2f8:
    // 0x1af2f8: 0x7040f628  paddub      $fp, $v0, $zero
    ctx->pc = 0x1af2f8u;
    SET_GPR_VEC(ctx, 30, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1af2fc: 0x33c2003f  andi        $v0, $fp, 0x3F
    ctx->pc = 0x1af2fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)63);
    // 0x1af300: 0x1440007f  bnez        $v0, . + 4 + (0x7F << 2)
    ctx->pc = 0x1AF300u;
    {
        const bool branch_taken_0x1af300 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1af300) {
            ctx->pc = 0x1AF500u;
            goto label_1af500;
        }
    }
    ctx->pc = 0x1AF308u;
    // 0x1af308: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x1af308u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x1af30c: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x1af30cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1af310: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1af310u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x1af314: 0x410821  addu        $at, $v0, $at
    ctx->pc = 0x1af314u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
    // 0x1af318: 0x8c32b490  lw          $s2, -0x4B70($at)
    ctx->pc = 0x1af318u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294947984)));
    // 0x1af31c: 0x111100  sll         $v0, $s1, 4
    ctx->pc = 0x1af31cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x1af320: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x1af320u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1af324: 0x244234b8  addiu       $v0, $v0, 0x34B8
    ctx->pc = 0x1af324u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 13496));
    // 0x1af328: 0x24427ff8  addiu       $v0, $v0, 0x7FF8
    ctx->pc = 0x1af328u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32760));
    // 0x1af32c: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x1af32cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1af330: 0x7e420000  sq          $v0, 0x0($s2)
    ctx->pc = 0x1af330u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 0), GPR_VEC(ctx, 2));
    // 0x1af334: 0x26520010  addiu       $s2, $s2, 0x10
    ctx->pc = 0x1af334u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x1af338: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x1af338u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x1af33c: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x1af33cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x1af340: 0xc7ac00bc  lwc1        $f12, 0xBC($sp)
    ctx->pc = 0x1af340u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1af344: 0xc040c60  jal         func_103180
    ctx->pc = 0x1AF344u;
    SET_GPR_U32(ctx, 31, 0x1AF34Cu);
    ctx->pc = 0x103180u;
    {
        ctx->pc = 0x1AF34Cu;
        ps2_stubs::sceVu0DivVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1AF34Cu) { return; }
    ctx->pc = 0x1AF34Cu;
label_1af34c:
    // 0x1af34c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1af34cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1af350: 0x12220045  beq         $s1, $v0, . + 4 + (0x45 << 2)
    ctx->pc = 0x1AF350u;
    {
        const bool branch_taken_0x1af350 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x1af350) {
            ctx->pc = 0x1AF468u;
            goto label_1af468;
        }
    }
    ctx->pc = 0x1AF358u;
    // 0x1af358: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1af358u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1af35c: 0x1222002c  beq         $s1, $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x1AF35Cu;
    {
        const bool branch_taken_0x1af35c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x1af35c) {
            ctx->pc = 0x1AF410u;
            goto label_1af410;
        }
    }
    ctx->pc = 0x1AF364u;
    // 0x1af364: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1af364u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1af368: 0x12220013  beq         $s1, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x1AF368u;
    {
        const bool branch_taken_0x1af368 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x1af368) {
            ctx->pc = 0x1AF3B8u;
            goto label_1af3b8;
        }
    }
    ctx->pc = 0x1AF370u;
    // 0x1af370: 0x12200003  beqz        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1AF370u;
    {
        const bool branch_taken_0x1af370 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x1af370) {
            ctx->pc = 0x1AF380u;
            goto label_1af380;
        }
    }
    ctx->pc = 0x1AF378u;
    // 0x1af378: 0x1000004f  b           . + 4 + (0x4F << 2)
    ctx->pc = 0x1AF378u;
    {
        const bool branch_taken_0x1af378 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1af378) {
            ctx->pc = 0x1AF4B8u;
            goto label_1af4b8;
        }
    }
    ctx->pc = 0x1AF380u;
label_1af380:
    // 0x1af380: 0x3c024386  lui         $v0, 0x4386
    ctx->pc = 0x1af380u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17286 << 16));
    // 0x1af384: 0x34426665  ori         $v0, $v0, 0x6665
    ctx->pc = 0x1af384u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26213);
    // 0x1af388: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1af388u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1af38c: 0xc7a000b0  lwc1        $f0, 0xB0($sp)
    ctx->pc = 0x1af38cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1af390: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1af390u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1af394: 0xe7a000b0  swc1        $f0, 0xB0($sp)
    ctx->pc = 0x1af394u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x1af398: 0x3c024391  lui         $v0, 0x4391
    ctx->pc = 0x1af398u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17297 << 16));
    // 0x1af39c: 0x34423332  ori         $v0, $v0, 0x3332
    ctx->pc = 0x1af39cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13106);
    // 0x1af3a0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1af3a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1af3a4: 0xc7a000b4  lwc1        $f0, 0xB4($sp)
    ctx->pc = 0x1af3a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1af3a8: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1af3a8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1af3ac: 0xe7a000b4  swc1        $f0, 0xB4($sp)
    ctx->pc = 0x1af3acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
    // 0x1af3b0: 0x10000041  b           . + 4 + (0x41 << 2)
    ctx->pc = 0x1AF3B0u;
    {
        const bool branch_taken_0x1af3b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1af3b0) {
            ctx->pc = 0x1AF4B8u;
            goto label_1af4b8;
        }
    }
    ctx->pc = 0x1AF3B8u;
label_1af3b8:
    // 0x1af3b8: 0x3c024386  lui         $v0, 0x4386
    ctx->pc = 0x1af3b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17286 << 16));
    // 0x1af3bc: 0x34426665  ori         $v0, $v0, 0x6665
    ctx->pc = 0x1af3bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26213);
    // 0x1af3c0: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1af3c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1af3c4: 0x3c023f59  lui         $v0, 0x3F59
    ctx->pc = 0x1af3c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16217 << 16));
    // 0x1af3c8: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x1af3c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
    // 0x1af3cc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1af3ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1af3d0: 0xc7a000b0  lwc1        $f0, 0xB0($sp)
    ctx->pc = 0x1af3d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1af3d4: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1af3d4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1af3d8: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x1af3d8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x1af3dc: 0xe7a000b0  swc1        $f0, 0xB0($sp)
    ctx->pc = 0x1af3dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x1af3e0: 0x3c024391  lui         $v0, 0x4391
    ctx->pc = 0x1af3e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17297 << 16));
    // 0x1af3e4: 0x34423332  ori         $v0, $v0, 0x3332
    ctx->pc = 0x1af3e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13106);
    // 0x1af3e8: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1af3e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1af3ec: 0x3c023f59  lui         $v0, 0x3F59
    ctx->pc = 0x1af3ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16217 << 16));
    // 0x1af3f0: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x1af3f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
    // 0x1af3f4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1af3f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1af3f8: 0xc7a000b4  lwc1        $f0, 0xB4($sp)
    ctx->pc = 0x1af3f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1af3fc: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1af3fcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1af400: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x1af400u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x1af404: 0xe7a000b4  swc1        $f0, 0xB4($sp)
    ctx->pc = 0x1af404u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
    // 0x1af408: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x1AF408u;
    {
        const bool branch_taken_0x1af408 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1af408) {
            ctx->pc = 0x1AF4B8u;
            goto label_1af4b8;
        }
    }
    ctx->pc = 0x1AF410u;
label_1af410:
    // 0x1af410: 0x3c024406  lui         $v0, 0x4406
    ctx->pc = 0x1af410u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17414 << 16));
    // 0x1af414: 0x34426667  ori         $v0, $v0, 0x6667
    ctx->pc = 0x1af414u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26215);
    // 0x1af418: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1af418u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1af41c: 0x3c023f33  lui         $v0, 0x3F33
    ctx->pc = 0x1af41cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16179 << 16));
    // 0x1af420: 0x34423333  ori         $v0, $v0, 0x3333
    ctx->pc = 0x1af420u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13107);
    // 0x1af424: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1af424u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1af428: 0xc7a000b0  lwc1        $f0, 0xB0($sp)
    ctx->pc = 0x1af428u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1af42c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1af42cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1af430: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x1af430u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x1af434: 0xe7a000b0  swc1        $f0, 0xB0($sp)
    ctx->pc = 0x1af434u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x1af438: 0x3c024411  lui         $v0, 0x4411
    ctx->pc = 0x1af438u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17425 << 16));
    // 0x1af43c: 0x34423334  ori         $v0, $v0, 0x3334
    ctx->pc = 0x1af43cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13108);
    // 0x1af440: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1af440u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1af444: 0x3c023f33  lui         $v0, 0x3F33
    ctx->pc = 0x1af444u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16179 << 16));
    // 0x1af448: 0x34423333  ori         $v0, $v0, 0x3333
    ctx->pc = 0x1af448u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13107);
    // 0x1af44c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1af44cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1af450: 0xc7a000b4  lwc1        $f0, 0xB4($sp)
    ctx->pc = 0x1af450u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1af454: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1af454u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1af458: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x1af458u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x1af45c: 0xe7a000b4  swc1        $f0, 0xB4($sp)
    ctx->pc = 0x1af45cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
    // 0x1af460: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x1AF460u;
    {
        const bool branch_taken_0x1af460 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1af460) {
            ctx->pc = 0x1AF4B8u;
            goto label_1af4b8;
        }
    }
    ctx->pc = 0x1AF468u;
label_1af468:
    // 0x1af468: 0x3c024449  lui         $v0, 0x4449
    ctx->pc = 0x1af468u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17481 << 16));
    // 0x1af46c: 0x34429999  ori         $v0, $v0, 0x9999
    ctx->pc = 0x1af46cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39321);
    // 0x1af470: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1af470u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1af474: 0x3c023f0c  lui         $v0, 0x3F0C
    ctx->pc = 0x1af474u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16140 << 16));
    // 0x1af478: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x1af478u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x1af47c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1af47cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1af480: 0xc7a000b0  lwc1        $f0, 0xB0($sp)
    ctx->pc = 0x1af480u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1af484: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1af484u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1af488: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x1af488u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x1af48c: 0xe7a000b0  swc1        $f0, 0xB0($sp)
    ctx->pc = 0x1af48cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x1af490: 0x3c024459  lui         $v0, 0x4459
    ctx->pc = 0x1af490u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17497 << 16));
    // 0x1af494: 0x3442cccc  ori         $v0, $v0, 0xCCCC
    ctx->pc = 0x1af494u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52428);
    // 0x1af498: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1af498u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1af49c: 0x3c023f0c  lui         $v0, 0x3F0C
    ctx->pc = 0x1af49cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16140 << 16));
    // 0x1af4a0: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x1af4a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x1af4a4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1af4a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1af4a8: 0xc7a000b4  lwc1        $f0, 0xB4($sp)
    ctx->pc = 0x1af4a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1af4ac: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1af4acu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1af4b0: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x1af4b0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x1af4b4: 0xe7a000b4  swc1        $f0, 0xB4($sp)
    ctx->pc = 0x1af4b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
label_1af4b8:
    // 0x1af4b8: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x1af4b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1af4bc: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x1af4bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x1af4c0: 0xc040cac  jal         func_1032B0
    ctx->pc = 0x1AF4C0u;
    SET_GPR_U32(ctx, 31, 0x1AF4C8u);
    ctx->pc = 0x1032B0u;
    {
        ctx->pc = 0x1AF4C8u;
        ps2_stubs::sceVu0FTOI4Vector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1AF4C8u) { return; }
    ctx->pc = 0x1AF4C8u;
label_1af4c8:
    // 0x1af4c8: 0x27a200a0  addiu       $v0, $sp, 0xA0
    ctx->pc = 0x1af4c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1af4cc: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x1af4ccu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1af4d0: 0x7e420000  sq          $v0, 0x0($s2)
    ctx->pc = 0x1af4d0u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 0), GPR_VEC(ctx, 2));
    // 0x1af4d4: 0x26520010  addiu       $s2, $s2, 0x10
    ctx->pc = 0x1af4d4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x1af4d8: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x1af4d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x1af4dc: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x1af4dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1af4e0: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1af4e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x1af4e4: 0x410821  addu        $at, $v0, $at
    ctx->pc = 0x1af4e4u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
    // 0x1af4e8: 0xac32b490  sw          $s2, -0x4B70($at)
    ctx->pc = 0x1af4e8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294947984), GPR_U32(ctx, 18));
    // 0x1af4ec: 0x26f70001  addiu       $s7, $s7, 0x1
    ctx->pc = 0x1af4ecu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
    // 0x1af4f0: 0x2ee103e8  sltiu       $at, $s7, 0x3E8
    ctx->pc = 0x1af4f0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 23) < (uint64_t)(int64_t)(int32_t)1000) ? 1 : 0);
    // 0x1af4f4: 0x10200008  beqz        $at, . + 4 + (0x8 << 2)
    ctx->pc = 0x1AF4F4u;
    {
        const bool branch_taken_0x1af4f4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1af4f4) {
            ctx->pc = 0x1AF518u;
            goto label_1af518;
        }
    }
    ctx->pc = 0x1AF4FCu;
    // 0x1af4fc: 0x0  nop
    ctx->pc = 0x1af4fcu;
    // NOP
label_1af500:
    // 0x1af500: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x1af500u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
    // 0x1af504: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1af504u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_1af508:
    // 0x1af508: 0x2e6207d0  sltiu       $v0, $s3, 0x7D0
    ctx->pc = 0x1af508u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)2000) ? 1 : 0);
    // 0x1af50c: 0x1440ff3f  bnez        $v0, . + 4 + (-0xC1 << 2)
    ctx->pc = 0x1AF50Cu;
    {
        const bool branch_taken_0x1af50c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1af50c) {
            ctx->pc = 0x1AF20Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1af20c;
        }
    }
    ctx->pc = 0x1AF514u;
    // 0x1af514: 0x0  nop
    ctx->pc = 0x1af514u;
    // NOP
label_1af518:
    // 0x1af518: 0xc06bd58  jal         func_1AF560
    ctx->pc = 0x1AF518u;
    SET_GPR_U32(ctx, 31, 0x1AF520u);
    ctx->pc = 0x1AF560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF560u, 0x1AF518u, 0x1AF520u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AF520u;
label_1af520:
    // 0x1af520: 0x7bbf0090  lq          $ra, 0x90($sp)
    ctx->pc = 0x1af520u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1af524: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x1af524u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1af528: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x1af528u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1af52c: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x1af52cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1af530: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1af530u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1af534: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1af534u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1af538: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1af538u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1af53c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1af53cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1af540: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1af540u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1af544: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1af544u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1af548: 0x27bd00e0  addiu       $sp, $sp, 0xE0
    ctx->pc = 0x1af548u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x1af54c: 0x3e00008  jr          $ra
    ctx->pc = 0x1AF54Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AF54Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AF554u;
}

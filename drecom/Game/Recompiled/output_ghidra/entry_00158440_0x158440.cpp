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

// Function: entry_00158440
// Address: 0x158440 - 0x1584fc
void entry_00158440_0x158440(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00158440_0x158440");
#endif

    ctx->pc = 0x158440u;

    // 0x158440: 0x26960090  addiu       $s6, $s4, 0x90
    ctx->pc = 0x158440u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 20), 144));
    // 0x158444: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x158444u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x158448: 0xaec20000  sw          $v0, 0x0($s6)
    ctx->pc = 0x158448u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 2));
    // 0x15844c: 0x3c020400  lui         $v0, 0x400
    ctx->pc = 0x15844cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
    // 0x158450: 0x34451050  ori         $a1, $v0, 0x1050
    ctx->pc = 0x158450u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4176);
    // 0x158454: 0xaec50004  sw          $a1, 0x4($s6)
    ctx->pc = 0x158454u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 4), GPR_U32(ctx, 5));
    // 0x158458: 0x97c40018  lhu         $a0, 0x18($fp)
    ctx->pc = 0x158458u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 24)));
    // 0x15845c: 0x30833fff  andi        $v1, $a0, 0x3FFF
    ctx->pc = 0x15845cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)16383);
    // 0x158460: 0x3c020008  lui         $v0, 0x8
    ctx->pc = 0x158460u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
    // 0x158464: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x158464u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x158468: 0x24021400  addiu       $v0, $zero, 0x1400
    ctx->pc = 0x158468u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5120));
    // 0x15846c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x15846cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x158470: 0x622025  or          $a0, $v1, $v0
    ctx->pc = 0x158470u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x158474: 0x3c020008  lui         $v0, 0x8
    ctx->pc = 0x158474u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
    // 0x158478: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x158478u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x15847c: 0x823025  or          $a2, $a0, $v0
    ctx->pc = 0x15847cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x158480: 0xfec60008  sd          $a2, 0x8($s6)
    ctx->pc = 0x158480u;
    WRITE64(ADD32(GPR_U32(ctx, 22), 8), GPR_U64(ctx, 6));
    // 0x158484: 0x26d6fff0  addiu       $s6, $s6, -0x10
    ctx->pc = 0x158484u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4294967280));
    // 0x158488: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x158488u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    // 0x15848c: 0xaec50000  sw          $a1, 0x0($s6)
    ctx->pc = 0x15848cu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 5));
    // 0x158490: 0x3c030400  lui         $v1, 0x400
    ctx->pc = 0x158490u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1024 << 16));
    // 0x158494: 0x34641051  ori         $a0, $v1, 0x1051
    ctx->pc = 0x158494u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4177);
    // 0x158498: 0xaec40004  sw          $a0, 0x4($s6)
    ctx->pc = 0x158498u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 4), GPR_U32(ctx, 4));
    // 0x15849c: 0xfec00008  sd          $zero, 0x8($s6)
    ctx->pc = 0x15849cu;
    WRITE64(ADD32(GPR_U32(ctx, 22), 8), GPR_U64(ctx, 0));
    // 0x1584a0: 0x26c2fff0  addiu       $v0, $s6, -0x10
    ctx->pc = 0x1584a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 4294967280));
    // 0x1584a4: 0x7040b628  paddub      $s6, $v0, $zero
    ctx->pc = 0x1584a4u;
    SET_GPR_VEC(ctx, 22, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1584a8: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x1584a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x1584ac: 0xaec20000  sw          $v0, 0x0($s6)
    ctx->pc = 0x1584acu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 2));
    // 0x1584b0: 0x3c020400  lui         $v0, 0x400
    ctx->pc = 0x1584b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
    // 0x1584b4: 0x34431052  ori         $v1, $v0, 0x1052
    ctx->pc = 0x1584b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4178);
    // 0x1584b8: 0xaec30004  sw          $v1, 0x4($s6)
    ctx->pc = 0x1584b8u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 4), GPR_U32(ctx, 3));
    // 0x1584bc: 0x240400e0  addiu       $a0, $zero, 0xE0
    ctx->pc = 0x1584bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
    // 0x1584c0: 0x4103c  dsll32      $v0, $a0, 0
    ctx->pc = 0x1584c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << (32 + 0));
    // 0x1584c4: 0x24030200  addiu       $v1, $zero, 0x200
    ctx->pc = 0x1584c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x1584c8: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x1584c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1584cc: 0xfec20008  sd          $v0, 0x8($s6)
    ctx->pc = 0x1584ccu;
    WRITE64(ADD32(GPR_U32(ctx, 22), 8), GPR_U64(ctx, 2));
    // 0x1584d0: 0x26d6fff0  addiu       $s6, $s6, -0x10
    ctx->pc = 0x1584d0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4294967280));
    // 0x1584d4: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x1584d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x1584d8: 0xaec20000  sw          $v0, 0x0($s6)
    ctx->pc = 0x1584d8u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 2));
    // 0x1584dc: 0x3c020400  lui         $v0, 0x400
    ctx->pc = 0x1584dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
    // 0x1584e0: 0x34431053  ori         $v1, $v0, 0x1053
    ctx->pc = 0x1584e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4179);
    // 0x1584e4: 0xaec30004  sw          $v1, 0x4($s6)
    ctx->pc = 0x1584e4u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 4), GPR_U32(ctx, 3));
    // 0x1584e8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1584e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1584ec: 0xfec20008  sd          $v0, 0x8($s6)
    ctx->pc = 0x1584ecu;
    WRITE64(ADD32(GPR_U32(ctx, 22), 8), GPR_U64(ctx, 2));
    // 0x1584f0: 0x70009628  paddub      $s2, $zero, $zero
    ctx->pc = 0x1584f0u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1584f4: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1584F4u;
    {
        const bool branch_taken_0x1584f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1584f4) {
            ctx->pc = 0x158520u;
            return;
        }
    }
    ctx->pc = 0x1584FCu;
}

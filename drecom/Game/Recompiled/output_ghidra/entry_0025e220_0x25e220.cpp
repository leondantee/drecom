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

// Function: entry_0025e220
// Address: 0x25e220 - 0x25e2c0
void entry_0025e220_0x25e220(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0025e220_0x25e220");
#endif

    ctx->pc = 0x25e220u;

    // 0x25e220: 0x26a20001  addiu       $v0, $s5, 0x1
    ctx->pc = 0x25e220u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x25e224: 0x7040ae28  paddub      $s5, $v0, $zero
    ctx->pc = 0x25e224u;
    SET_GPR_VEC(ctx, 21, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x25e228: 0x8e020350  lw          $v0, 0x350($s0)
    ctx->pc = 0x25e228u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 848)));
    // 0x25e22c: 0x551021  addu        $v0, $v0, $s5
    ctx->pc = 0x25e22cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x25e230: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x25e230u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x25e234: 0x305600ff  andi        $s6, $v0, 0xFF
    ctx->pc = 0x25e234u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x25e238: 0x32c2003f  andi        $v0, $s6, 0x3F
    ctx->pc = 0x25e238u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)63);
    // 0x25e23c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x25e23cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x25e240: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x25e240u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x25e244: 0x70409628  paddub      $s2, $v0, $zero
    ctx->pc = 0x25e244u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x25e248: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x25e248u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x25e24c: 0x521821  addu        $v1, $v0, $s2
    ctx->pc = 0x25e24cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x25e250: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x25e250u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x25e254: 0x622021  addu        $a0, $v1, $v0
    ctx->pc = 0x25e254u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x25e258: 0x42900  sll         $a1, $a0, 4
    ctx->pc = 0x25e258u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x25e25c: 0x8e0602d0  lw          $a2, 0x2D0($s0)
    ctx->pc = 0x25e25cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 720)));
    // 0x25e260: 0xc51021  addu        $v0, $a2, $a1
    ctx->pc = 0x25e260u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x25e264: 0x70408e28  paddub      $s1, $v0, $zero
    ctx->pc = 0x25e264u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x25e268: 0x72209e28  paddub      $s3, $s1, $zero
    ctx->pc = 0x25e268u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x25e26c: 0x960209e0  lhu         $v0, 0x9E0($s0)
    ctx->pc = 0x25e26cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2528)));
    // 0x25e270: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x25e270u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x25e274: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x25e274u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x25e278: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x25E278u;
    {
        const bool branch_taken_0x25e278 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x25e278) {
            ctx->pc = 0x25E2C0u;
            return;
        }
    }
    ctx->pc = 0x25E280u;
    // 0x25e280: 0x8e020354  lw          $v0, 0x354($s0)
    ctx->pc = 0x25e280u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 852)));
    // 0x25e284: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x25E284u;
    {
        const bool branch_taken_0x25e284 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x25e284) {
            ctx->pc = 0x25E2C0u;
            return;
        }
    }
    ctx->pc = 0x25E28Cu;
    // 0x25e28c: 0x8e020354  lw          $v0, 0x354($s0)
    ctx->pc = 0x25e28cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 852)));
    // 0x25e290: 0x521821  addu        $v1, $v0, $s2
    ctx->pc = 0x25e290u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x25e294: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x25e294u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x25e298: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x25e298u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x25e29c: 0x70409628  paddub      $s2, $v0, $zero
    ctx->pc = 0x25e29cu;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x25e2a0: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x25e2a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x25e2a4: 0x521821  addu        $v1, $v0, $s2
    ctx->pc = 0x25e2a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x25e2a8: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x25e2a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x25e2ac: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x25e2acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x25e2b0: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x25e2b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x25e2b4: 0x8e0202d0  lw          $v0, 0x2D0($s0)
    ctx->pc = 0x25e2b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 720)));
    // 0x25e2b8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x25e2b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x25e2bc: 0x70409e28  paddub      $s3, $v0, $zero
    ctx->pc = 0x25e2bcu;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    ctx->pc = 0x25e2c0u;
}

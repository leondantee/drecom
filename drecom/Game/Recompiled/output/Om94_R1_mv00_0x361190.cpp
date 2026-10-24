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

// Function: Om94_R1_mv00
// Address: 0x361190 - 0x36132c
void Om94_R1_mv00_0x361190(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Om94_R1_mv00_0x361190");
#endif

    ctx->pc = 0x361190u;

    // 0x361190: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x361190u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x361194: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x361194u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x361198: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x361198u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x36119c: 0xafa40038  sw          $a0, 0x38($sp)
    ctx->pc = 0x36119cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 4));
    // 0x3611a0: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x3611a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x3611a4: 0x2463ac80  addiu       $v1, $v1, -0x5380
    ctx->pc = 0x3611a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294945920));
    // 0x3611a8: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3611a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x3611ac: 0x78630000  lq          $v1, 0x0($v1)
    ctx->pc = 0x3611acu;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x3AAC80u));
    // 0x3611b0: 0x7c830000  sq          $v1, 0x0($a0)
    ctx->pc = 0x3611b0u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 3));
    // 0x3611b4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x3611b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3611b8: 0x8c710058  lw          $s1, 0x58($v1)
    ctx->pc = 0x3611b8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x3611bc: 0x8e300034  lw          $s0, 0x34($s1)
    ctx->pc = 0x3611bcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
    // 0x3611c0: 0x8e04005c  lw          $a0, 0x5C($s0)
    ctx->pc = 0x3611c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
    // 0x3611c4: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x3611c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3611c8: 0x24630018  addiu       $v1, $v1, 0x18
    ctx->pc = 0x3611c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24));
    // 0x3611cc: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x3611ccu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x3611d0: 0x8e04005c  lw          $a0, 0x5C($s0)
    ctx->pc = 0x3611d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
    // 0x3611d4: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x3611d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3611d8: 0x30631fff  andi        $v1, $v1, 0x1FFF
    ctx->pc = 0x3611d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8191);
    // 0x3611dc: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x3611dcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x3611e0: 0x8e040058  lw          $a0, 0x58($s0)
    ctx->pc = 0x3611e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x3611e4: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x3611e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3611e8: 0x24630018  addiu       $v1, $v1, 0x18
    ctx->pc = 0x3611e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24));
    // 0x3611ec: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x3611ecu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x3611f0: 0x8e040058  lw          $a0, 0x58($s0)
    ctx->pc = 0x3611f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x3611f4: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x3611f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3611f8: 0x30631fff  andi        $v1, $v1, 0x1FFF
    ctx->pc = 0x3611f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8191);
    // 0x3611fc: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x3611fcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x361200: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x361200u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x361204: 0x90630003  lbu         $v1, 0x3($v1)
    ctx->pc = 0x361204u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 3)));
    // 0x361208: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x361208u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x36120c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x36120cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x361210: 0x10830024  beq         $a0, $v1, . + 4 + (0x24 << 2)
    ctx->pc = 0x361210u;
    {
        const bool branch_taken_0x361210 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x361210) {
            ctx->pc = 0x3612A4u;
            goto label_3612a4;
        }
    }
    ctx->pc = 0x361218u;
    // 0x361218: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x361218u;
    {
        const bool branch_taken_0x361218 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x361218) {
            ctx->pc = 0x361228u;
            goto label_361228;
        }
    }
    ctx->pc = 0x361220u;
    // 0x361220: 0x1000003d  b           . + 4 + (0x3D << 2)
    ctx->pc = 0x361220u;
    {
        const bool branch_taken_0x361220 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x361220) {
            ctx->pc = 0x361318u;
            goto label_361318;
        }
    }
    ctx->pc = 0x361228u;
label_361228:
    // 0x361228: 0x8e04005c  lw          $a0, 0x5C($s0)
    ctx->pc = 0x361228u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
    // 0x36122c: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x36122cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x361230: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x361230u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x361234: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x361234u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
    // 0x361238: 0x8e04005c  lw          $a0, 0x5C($s0)
    ctx->pc = 0x361238u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
    // 0x36123c: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x36123cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x361240: 0x30631fff  andi        $v1, $v1, 0x1FFF
    ctx->pc = 0x361240u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8191);
    // 0x361244: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x361244u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
    // 0x361248: 0x8e040058  lw          $a0, 0x58($s0)
    ctx->pc = 0x361248u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x36124c: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x36124cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x361250: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x361250u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x361254: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x361254u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
    // 0x361258: 0x8e040058  lw          $a0, 0x58($s0)
    ctx->pc = 0x361258u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x36125c: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x36125cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x361260: 0x30631fff  andi        $v1, $v1, 0x1FFF
    ctx->pc = 0x361260u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8191);
    // 0x361264: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x361264u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
    // 0x361268: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x361268u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x36126c: 0x8c83128c  lw          $v1, 0x128C($a0)
    ctx->pc = 0x36126cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4748)));
    // 0x361270: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x361270u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x361274: 0xac83128c  sw          $v1, 0x128C($a0)
    ctx->pc = 0x361274u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4748), GPR_U32(ctx, 3));
    // 0x361278: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x361278u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x36127c: 0x8c63128c  lw          $v1, 0x128C($v1)
    ctx->pc = 0x36127cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4748)));
    // 0x361280: 0x2c610061  sltiu       $at, $v1, 0x61
    ctx->pc = 0x361280u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)97) ? 1 : 0);
    // 0x361284: 0x14200024  bnez        $at, . + 4 + (0x24 << 2)
    ctx->pc = 0x361284u;
    {
        const bool branch_taken_0x361284 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x361284) {
            ctx->pc = 0x361318u;
            goto label_361318;
        }
    }
    ctx->pc = 0x36128Cu;
    // 0x36128c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x36128cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x361290: 0x90830003  lbu         $v1, 0x3($a0)
    ctx->pc = 0x361290u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 3)));
    // 0x361294: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x361294u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x361298: 0xa0830003  sb          $v1, 0x3($a0)
    ctx->pc = 0x361298u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3), (uint8_t)GPR_U32(ctx, 3));
    // 0x36129c: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x36129Cu;
    {
        const bool branch_taken_0x36129c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x36129c) {
            ctx->pc = 0x361318u;
            goto label_361318;
        }
    }
    ctx->pc = 0x3612A4u;
label_3612a4:
    // 0x3612a4: 0x8e04005c  lw          $a0, 0x5C($s0)
    ctx->pc = 0x3612a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
    // 0x3612a8: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x3612a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x3612ac: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x3612acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x3612b0: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x3612b0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
    // 0x3612b4: 0x8e04005c  lw          $a0, 0x5C($s0)
    ctx->pc = 0x3612b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
    // 0x3612b8: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x3612b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x3612bc: 0x30631fff  andi        $v1, $v1, 0x1FFF
    ctx->pc = 0x3612bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8191);
    // 0x3612c0: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x3612c0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
    // 0x3612c4: 0x8e040058  lw          $a0, 0x58($s0)
    ctx->pc = 0x3612c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x3612c8: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x3612c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x3612cc: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x3612ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x3612d0: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x3612d0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
    // 0x3612d4: 0x8e040058  lw          $a0, 0x58($s0)
    ctx->pc = 0x3612d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x3612d8: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x3612d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x3612dc: 0x30631fff  andi        $v1, $v1, 0x1FFF
    ctx->pc = 0x3612dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8191);
    // 0x3612e0: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x3612e0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
    // 0x3612e4: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x3612e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3612e8: 0x8c83128c  lw          $v1, 0x128C($a0)
    ctx->pc = 0x3612e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4748)));
    // 0x3612ec: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x3612ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x3612f0: 0xac83128c  sw          $v1, 0x128C($a0)
    ctx->pc = 0x3612f0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4748), GPR_U32(ctx, 3));
    // 0x3612f4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x3612f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3612f8: 0x8c63128c  lw          $v1, 0x128C($v1)
    ctx->pc = 0x3612f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4748)));
    // 0x3612fc: 0x2c610020  sltiu       $at, $v1, 0x20
    ctx->pc = 0x3612fcu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
    // 0x361300: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x361300u;
    {
        const bool branch_taken_0x361300 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x361300) {
            ctx->pc = 0x361318u;
            goto label_361318;
        }
    }
    ctx->pc = 0x361308u;
    // 0x361308: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x361308u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x36130c: 0x90830003  lbu         $v1, 0x3($a0)
    ctx->pc = 0x36130cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 3)));
    // 0x361310: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x361310u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x361314: 0xa0830003  sb          $v1, 0x3($a0)
    ctx->pc = 0x361314u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3), (uint8_t)GPR_U32(ctx, 3));
label_361318:
    // 0x361318: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x361318u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x36131c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x36131cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x361320: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x361320u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x361324: 0x3e00008  jr          $ra
    ctx->pc = 0x361324u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x361324u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36132Cu;
}

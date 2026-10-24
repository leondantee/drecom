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

// Function: Mod_ot_ss_init
// Address: 0x1ab8c0 - 0x1aba9c
void Mod_ot_ss_init_0x1ab8c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Mod_ot_ss_init_0x1ab8c0");
#endif

    ctx->pc = 0x1ab8c0u;

    // 0x1ab8c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1ab8c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1ab8c4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1ab8c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1ab8c8: 0xa3a40018  sb          $a0, 0x18($sp)
    ctx->pc = 0x1ab8c8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 24), (uint8_t)GPR_U32(ctx, 4));
    // 0x1ab8cc: 0x93a30018  lbu         $v1, 0x18($sp)
    ctx->pc = 0x1ab8ccu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1ab8d0: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1ab8d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1ab8d4: 0x32180  sll         $a0, $v1, 6
    ctx->pc = 0x1ab8d4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
    // 0x1ab8d8: 0x3c03005d  lui         $v1, 0x5D
    ctx->pc = 0x1ab8d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
    // 0x1ab8dc: 0x24633e80  addiu       $v1, $v1, 0x3E80
    ctx->pc = 0x1ab8dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16000));
    // 0x1ab8e0: 0x648021  addu        $s0, $v1, $a0
    ctx->pc = 0x1ab8e0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1ab8e4: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x1ab8e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x1ab8e8: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x1ab8e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
    // 0x1ab8ec: 0xfe030000  sd          $v1, 0x0($s0)
    ctx->pc = 0x1ab8ecu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 3));
    // 0x1ab8f0: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x1ab8f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x1ab8f4: 0x3c035000  lui         $v1, 0x5000
    ctx->pc = 0x1ab8f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20480 << 16));
    // 0x1ab8f8: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x1ab8f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
    // 0x1ab8fc: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x1ab8fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
    // 0x1ab900: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x1ab900u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x1ab904: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x1ab904u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1ab908: 0x34038001  ori         $v1, $zero, 0x8001
    ctx->pc = 0x1ab908u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32769);
    // 0x1ab90c: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x1ab90cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1ab910: 0xfe030010  sd          $v1, 0x10($s0)
    ctx->pc = 0x1ab910u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 16), GPR_U64(ctx, 3));
    // 0x1ab914: 0x2403000e  addiu       $v1, $zero, 0xE
    ctx->pc = 0x1ab914u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x1ab918: 0xfe030018  sd          $v1, 0x18($s0)
    ctx->pc = 0x1ab918u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 24), GPR_U64(ctx, 3));
    // 0x1ab91c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1ab91cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1ab920: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x1ab920u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1ab924: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1ab924u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ab928: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x1ab928u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1ab92c: 0xfe030020  sd          $v1, 0x20($s0)
    ctx->pc = 0x1ab92cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 32), GPR_U64(ctx, 3));
    // 0x1ab930: 0x24030060  addiu       $v1, $zero, 0x60
    ctx->pc = 0x1ab930u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x1ab934: 0xfe030028  sd          $v1, 0x28($s0)
    ctx->pc = 0x1ab934u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 40), GPR_U64(ctx, 3));
    // 0x1ab938: 0xfe000030  sd          $zero, 0x30($s0)
    ctx->pc = 0x1ab938u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 48), GPR_U64(ctx, 0));
    // 0x1ab93c: 0x93a30018  lbu         $v1, 0x18($sp)
    ctx->pc = 0x1ab93cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1ab940: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1ab940u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1ab944: 0x32180  sll         $a0, $v1, 6
    ctx->pc = 0x1ab944u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
    // 0x1ab948: 0x3c03005d  lui         $v1, 0x5D
    ctx->pc = 0x1ab948u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
    // 0x1ab94c: 0x24633e00  addiu       $v1, $v1, 0x3E00
    ctx->pc = 0x1ab94cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 15872));
    // 0x1ab950: 0x648021  addu        $s0, $v1, $a0
    ctx->pc = 0x1ab950u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1ab954: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x1ab954u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x1ab958: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x1ab958u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
    // 0x1ab95c: 0xfe030000  sd          $v1, 0x0($s0)
    ctx->pc = 0x1ab95cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 3));
    // 0x1ab960: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x1ab960u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x1ab964: 0x3c035000  lui         $v1, 0x5000
    ctx->pc = 0x1ab964u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20480 << 16));
    // 0x1ab968: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x1ab968u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
    // 0x1ab96c: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x1ab96cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
    // 0x1ab970: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x1ab970u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x1ab974: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x1ab974u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1ab978: 0x34038001  ori         $v1, $zero, 0x8001
    ctx->pc = 0x1ab978u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32769);
    // 0x1ab97c: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x1ab97cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1ab980: 0xfe030010  sd          $v1, 0x10($s0)
    ctx->pc = 0x1ab980u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 16), GPR_U64(ctx, 3));
    // 0x1ab984: 0x2403000e  addiu       $v1, $zero, 0xE
    ctx->pc = 0x1ab984u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x1ab988: 0xfe030018  sd          $v1, 0x18($s0)
    ctx->pc = 0x1ab988u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 24), GPR_U64(ctx, 3));
    // 0x1ab98c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1ab98cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1ab990: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x1ab990u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1ab994: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1ab994u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1ab998: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x1ab998u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1ab99c: 0xfe030020  sd          $v1, 0x20($s0)
    ctx->pc = 0x1ab99cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 32), GPR_U64(ctx, 3));
    // 0x1ab9a0: 0x24030060  addiu       $v1, $zero, 0x60
    ctx->pc = 0x1ab9a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x1ab9a4: 0xfe030028  sd          $v1, 0x28($s0)
    ctx->pc = 0x1ab9a4u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 40), GPR_U64(ctx, 3));
    // 0x1ab9a8: 0xfe000030  sd          $zero, 0x30($s0)
    ctx->pc = 0x1ab9a8u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 48), GPR_U64(ctx, 0));
    // 0x1ab9ac: 0x93a30018  lbu         $v1, 0x18($sp)
    ctx->pc = 0x1ab9acu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1ab9b0: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1ab9b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1ab9b4: 0x32180  sll         $a0, $v1, 6
    ctx->pc = 0x1ab9b4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
    // 0x1ab9b8: 0x3c03005d  lui         $v1, 0x5D
    ctx->pc = 0x1ab9b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
    // 0x1ab9bc: 0x24633d80  addiu       $v1, $v1, 0x3D80
    ctx->pc = 0x1ab9bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 15744));
    // 0x1ab9c0: 0x648021  addu        $s0, $v1, $a0
    ctx->pc = 0x1ab9c0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1ab9c4: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x1ab9c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x1ab9c8: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x1ab9c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
    // 0x1ab9cc: 0xfe030000  sd          $v1, 0x0($s0)
    ctx->pc = 0x1ab9ccu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 3));
    // 0x1ab9d0: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x1ab9d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x1ab9d4: 0x3c035000  lui         $v1, 0x5000
    ctx->pc = 0x1ab9d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20480 << 16));
    // 0x1ab9d8: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x1ab9d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
    // 0x1ab9dc: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x1ab9dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
    // 0x1ab9e0: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x1ab9e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x1ab9e4: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x1ab9e4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1ab9e8: 0x34038001  ori         $v1, $zero, 0x8001
    ctx->pc = 0x1ab9e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32769);
    // 0x1ab9ec: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x1ab9ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1ab9f0: 0xfe030010  sd          $v1, 0x10($s0)
    ctx->pc = 0x1ab9f0u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 16), GPR_U64(ctx, 3));
    // 0x1ab9f4: 0x2403000e  addiu       $v1, $zero, 0xE
    ctx->pc = 0x1ab9f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x1ab9f8: 0xfe030018  sd          $v1, 0x18($s0)
    ctx->pc = 0x1ab9f8u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 24), GPR_U64(ctx, 3));
    // 0x1ab9fc: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1ab9fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1aba00: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x1aba00u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1aba04: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1aba04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1aba08: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x1aba08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1aba0c: 0xfe030020  sd          $v1, 0x20($s0)
    ctx->pc = 0x1aba0cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 32), GPR_U64(ctx, 3));
    // 0x1aba10: 0x24030060  addiu       $v1, $zero, 0x60
    ctx->pc = 0x1aba10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x1aba14: 0xfe030028  sd          $v1, 0x28($s0)
    ctx->pc = 0x1aba14u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 40), GPR_U64(ctx, 3));
    // 0x1aba18: 0xfe000030  sd          $zero, 0x30($s0)
    ctx->pc = 0x1aba18u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 48), GPR_U64(ctx, 0));
    // 0x1aba1c: 0x93a30018  lbu         $v1, 0x18($sp)
    ctx->pc = 0x1aba1cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1aba20: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1aba20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1aba24: 0x32180  sll         $a0, $v1, 6
    ctx->pc = 0x1aba24u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
    // 0x1aba28: 0x3c03005d  lui         $v1, 0x5D
    ctx->pc = 0x1aba28u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
    // 0x1aba2c: 0x24633d00  addiu       $v1, $v1, 0x3D00
    ctx->pc = 0x1aba2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 15616));
    // 0x1aba30: 0x648021  addu        $s0, $v1, $a0
    ctx->pc = 0x1aba30u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1aba34: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x1aba34u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x1aba38: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x1aba38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
    // 0x1aba3c: 0xfe030000  sd          $v1, 0x0($s0)
    ctx->pc = 0x1aba3cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 3));
    // 0x1aba40: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x1aba40u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x1aba44: 0x3c035000  lui         $v1, 0x5000
    ctx->pc = 0x1aba44u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20480 << 16));
    // 0x1aba48: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x1aba48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
    // 0x1aba4c: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x1aba4cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
    // 0x1aba50: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x1aba50u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x1aba54: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x1aba54u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1aba58: 0x34038001  ori         $v1, $zero, 0x8001
    ctx->pc = 0x1aba58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32769);
    // 0x1aba5c: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x1aba5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1aba60: 0xfe030010  sd          $v1, 0x10($s0)
    ctx->pc = 0x1aba60u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 16), GPR_U64(ctx, 3));
    // 0x1aba64: 0x2403000e  addiu       $v1, $zero, 0xE
    ctx->pc = 0x1aba64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x1aba68: 0xfe030018  sd          $v1, 0x18($s0)
    ctx->pc = 0x1aba68u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 24), GPR_U64(ctx, 3));
    // 0x1aba6c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1aba6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1aba70: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x1aba70u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1aba74: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x1aba74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1aba78: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x1aba78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1aba7c: 0xfe030020  sd          $v1, 0x20($s0)
    ctx->pc = 0x1aba7cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 32), GPR_U64(ctx, 3));
    // 0x1aba80: 0x24030060  addiu       $v1, $zero, 0x60
    ctx->pc = 0x1aba80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x1aba84: 0xfe030028  sd          $v1, 0x28($s0)
    ctx->pc = 0x1aba84u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 40), GPR_U64(ctx, 3));
    // 0x1aba88: 0xfe000030  sd          $zero, 0x30($s0)
    ctx->pc = 0x1aba88u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 48), GPR_U64(ctx, 0));
    // 0x1aba8c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1aba8cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1aba90: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x1aba90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1aba94: 0x3e00008  jr          $ra
    ctx->pc = 0x1ABA94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1ABA94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1ABA9Cu;
}
